-- INDEXES STARTS FROM 1
local tbl = { "first", 2, { "third" }, true, 2.8 }
print(tbl[3][1])

for i = 1, #tbl do
    if type(tbl[i]) ~= "table" and type(tbl[i]) ~= "boolean" then
        print(tbl[i] .. " : " .. type(tbl[i]))
    else
        print(tbl[i])
    end
end