--[[
    nil
    number - 1, 2 ,3, 3.14
    string - "example", 'example'
    boolean true false
]]

local x = 2
-- print(x)

_G.GlobalVar = 3

local text = [[text
    text
        text
    text
        text
text]]
local text2 = [[text2
text2
text2
text2
text2
text2]]
print(text)
print('----delimiter----')
print(text2)

local name, age, isAdmin = 'ilich', 26, true
print(name .. " - " .. type(name) .. "; " .. age .. " - " .. type(age) .. "; isAdmin - ".. type(isAdmin))