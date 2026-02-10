-- Ejercico 1a
esCero :: Int -> Bool
esCero x = x == 0

-- Ejercicio 1b
esPositivo :: Int -> Bool
esPositivo x = x >= 0

-- Ejercico 1 c
esVocal :: Char -> Bool
esVocal x | x == 'a' = True
          | x == 'e' = True
          | x == 'i' = True
          | x == 'o' = True
          | x == 'u' = True
          | otherwise = False

-- Ejercicio 2 a
paraTodo :: [Bool] -> Bool
paraTodo [] = True
paraTodo (x : xs) = x && paraTodo xs

-- Ejercicio 2 b
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x : xs) = x + sumatoria xs

-- Ejercicio 2 c
productoria :: [Int] -> Int
productoria [] = 1
productoria (x : xs) = x * (productoria xs)

-- Ejercicio 2 d
factorial :: Int -> Int
factorial 0 = 1
factorial x = x * factorial (x -1)

-- Ejercicio 2 e
promedio :: [Int] -> Int
promedio [] = 0
promedio (x : xs) = div (sumatoria xs) (length xs)

-- Ejercicio 3
pertenece :: Int -> [Int] -> Bool
pertenece x [] = False
pertenece x (y : ys) | x == y = True
                     | otherwise = pertenece x ys

-- Ejercicio 4 a
paraTodo' :: [a] -> (a -> Bool) -> Bool
paraTodo' [] t = True
paraTodo' (x : xs) t = t x && paraTodo' xs t

-- Ejercicio 4 b
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] t = False
existe' (x : xs) t = t x || (existe' xs t)

--Ejercicio 4 c
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] t = 0
sumatoria' (x:xs) t = t x + sumatoria' xs t

-- Ejercicio 4 d
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] t = 1
productoria' (x:xs) t = t x * productoria' xs t

--Ejercicio 5
paraTodo'' :: [Bool] -> Bool
paraTodo'' xs = paraTodo' xs (==True)

-- Ejercicio 6 a
todosPares :: [Int] -> Bool
todosPares [] = True
todosPares (x:xs) = esPar x && paraTodo' xs esPar
-- Extra para el ejercicio 6 a
esPar :: Int -> Bool
esPar x = mod x 2 == 0

-- Ejercicio 6 b
hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo t [] = False
hayMultiplo t (x:xs) = divisible x t || existe' xs (divisible t)
-- Extra para el ejercicio 6 b
divisible :: Int -> Int -> Bool
divisible t x | mod x t == 0 = True
              | otherwise = False

-- Ejercicio 6 c
sumaCuadrados :: Int -> Int
sumaCuadrados x = sumatoria' [0..(x-1)] (^2)
-- Extra para el ejercicio 6 c
cuadrado :: Int -> Int
cuadrado x = x * x

-- Ejercicio 6 d
factorial' :: Int -> Int
factorial' x = productoria [1..x]

-- Ejercicio 6 e
multiplicaPares :: [Int] -> Int
multiplicaPares xs = productoria (soloPares xs)

-- Ejercicio 7 a	
--La función map toma una función y una lista y aplica esa función a cada elemento de esa lista, produciendo una nueva lista. La misma se define de la siguiente forma: map :: (a -> b) -> [a] -> [b]. La funcion filter es una función que toma un predicado (función que devuelve un valor booleano) y una lista y devuelve una lista con los elementos que satisfacen el predicado. La misma se fefina de la siguiente forma: filter :: (a -> Bool) -> [a] -> [a]
-- Ejercicio 7 b
-- La expresión map succ [1, -4, 6, 2, -8] equivale a : [2,-3,7,3,-7]
-- Ejercicio 7 c
-- La expresión filter esPositivo [1, -4, 6, 2, -8] equivale a : [1,6,2]

--Ejercicio 8a
duplicaxs :: [Int] -> [Int]
duplicaxs [] = []
duplicaxs (x : xs) = (x * 2) : (duplicaxs xs)

-- Ejercicio 8b
duplicaxs' :: [Int] -> [Int]
duplicaxs' = map (* 2)

-- Ejercicio 9 a
soloPares :: [Int] -> [Int]
soloPares [] = []
soloPares (x : xs) | esPar x = x : soloPares xs
                   | otherwise = soloPares xs
-- Ejercicio 9 b
soloPares' :: [Int] -> [Int]
soloPares' = filter esPar

-- Ejercicio 9 c
multiplicaPares' :: [Int] -> Int
multiplicaPares' xs = productoria (soloPares xs)

-- Ejercicio 10 a
primIgualesA :: (a -> Bool) -> [a] -> [a]
primIgualesA t [] = []
primIgualesA t (x : xs) | t x == True = x : primIgualesA t xs
                        | otherwise = [] 

-- Ejercicio 10 b
primIgualesA' :: (a -> Bool) -> [a] -> [a]
primIgualesA' t xs = takeWhile t xs

-- Ejercicio 11 a
primIguales :: (Eq a) => [a] -> [a]
primIguales [] = []
primIguales (x : xs) = x : takeWhile (== x) xs


-- Ejercicio 11 b
primIguales' :: (Eq a) => [a] -> [a]
primIguales' xs = primIgualesA' (== head xs) xs


