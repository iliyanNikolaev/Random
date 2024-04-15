-- for i = 1, 10 do
--     print(i)
-- end

-- for i = 1, 10, 2 do
--     print(i)
-- end

local counter = 0
-- while true do
--     counter = counter + 1
--     if counter > 9 then
--         break
--     end
--     print(counter)
-- end

while counter < 10 do
    print(counter)
    counter = counter + 1
end
print('----delimiter----')
local i = 1;
repeat
    i = i + 1
    print("i: " .. i)
until i < 3