-- Ejercicio 1a) y 2a)
data Carrera = Matematica | Fisica | Computacion | Astrologia deriving (Eq, Ord, Show)
-- Ejercicio 1b)
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica Aplicada"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en computacion"
titulo Astrologia = "Licenciatura en Astrologia"

-- Ejercicio 3a)
type Ingreso = Int
data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving (Show)
data Area = Administrativa | Ensenanza | Economica | Postgrado deriving (Show)
data Persona = Decane
             | Docente Cargo
             | NoDocente Area
             | Estudiante Carrera Ingreso deriving (Show)
-- 3b) Cargo

-- Ejercicio 3c)
cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc [] ca = 0
cuantos_doc ((Docente c) : xs) ca | mismo_cargo c ca = 1 + cuantos_doc xs ca
                                  | otherwise = cuantos_doc xs ca
cuantos_doc (x:xs) ca = cuantos_doc xs ca
-- Extra para el ejercicio 3c)
mismo_cargo :: Cargo -> Cargo -> Bool
mismo_cargo Titular Titular = True
mismo_cargo Asociado Asociado = True
mismo_cargo Adjunto Adjunto = True
mismo_cargo Asistente Asistente = True
mismo_cargo Auxiliar Auxiliar = True
mismo_cargo _ _ = False

-- Ejercicio 3d)
cuantos_doc' :: [Persona] -> Cargo -> Int
cuantos_doc' xs c = length (filter (tiene_cargo c) xs)
-- Extra para el ejercicio 3d)
tiene_cargo :: Cargo -> Persona -> Bool
tiene_cargo c (Docente x) = mismo_cargo c x
tiene_cargo c t = False

-- Ejercicio 4)
primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento xs = Just (head xs)

-- Ejercicio 5a)
data Cola = VaciaC | Encolada Persona Cola deriving (Show)
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada p c) = Just c

-- Ejercicio 5b)
encolar :: Persona -> Cola -> Cola
encolar p VaciaC = Encolada p VaciaC
encolar p (Encolada ps c) = Encolada ps (encolar p c)

-- Ejercicio 5c)
busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC car = Nothing
busca (Encolada (Docente ca) c) car | tiene_cargo car (Docente ca) = Just (Docente ca)
                                    | otherwise = busca c car
busca (Encolada x c) car = busca c car

-- Ejercicio 6
type Diccionario = ListaAsoc String String
type Padron = ListaAsoc Int String
data ListaAsoc a b = Vacia | Nodo a b ( ListaAsoc a b ) deriving (Show)

-- Ejercicio 6 a) deriving (Show)

-- Ejercicio 6 1)
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo a b p) = 1 + la_long p

-- Ejercicio 6 2)
la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia Vacia = Vacia
la_concat Vacia (Nodo a b l) = Nodo a b l
la_concat (Nodo a b n) l = la_concat n (Nodo a b l)

-- Ejercicio 6 3)
la_agregar :: ListaAsoc a b -> a -> b -> ListaAsoc a b
la_agregar Vacia p s = (Nodo p s Vacia)
la_agregar (Nodo a b n) p s = (Nodo p s (Nodo a b n))

-- Ejercicio 6 4)
la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo a b n) = (a, b) : la_pares n

--Ejercicio 6 5)
la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia c = Nothing
la_busca (Nodo a b n) c | a == c = Just b
                        | otherwise = la_busca n c

-- Ejercicio 6 6)
la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar c Vacia = Vacia
la_borrar c (Nodo a b n) | c == a = la_borrar c n
                         | otherwise = (Nodo a b (la_borrar c n))

-- Ejercicio 7
data Arbol a = Hoja | Rama ( Arbol a ) a ( Arbol a ) deriving (Show)
type Prefijos = Arbol String
can , cana , canario , canas , cant , cantar , canto :: Prefijos
can = Rama cana "can" cant
cana = Rama canario "a" canas
canario = Rama Hoja "rio" Hoja
canas = Rama Hoja "s" Hoja
cant = Rama cantar "t" canto
cantar = Rama Hoja "ar" Hoja
canto = Rama Hoja "o" Hoja

-- Ejercicia 7 a)
a_long :: Arbol a -> Int
a_long Hoja = 0
a_long (Rama izq dato der) = 1 + a_long izq + a_long der

--Ejercicio 7 b)
a_hojas :: Arbol a -> Int
a_hojas Hoja = 1
a_hojas (Rama izq dato der) = 0 + a_hojas izq + a_hojas der
-- Ejercicio 7 c)
a_inc :: Num a => Arbol a -> Arbol a
a_inc Hoja = Hoja
a_inc (Rama izq num der) = Rama (a_inc izq) (num + 1) (a_inc der)

-- Ejercicio 7 d)
a_map :: (a -> b) -> Arbol a -> Arbol b
a_map t Hoja = Hoja
a_map t (Rama izq num der) = (Rama (a_map t izq) (t num) (a_map t der))

-- Ejercicio 7 d')
a_inc' :: Num a => Arbol a -> Arbol a
a_inc' (Rama izq num der) = a_map (+1) (Rama izq num der)
