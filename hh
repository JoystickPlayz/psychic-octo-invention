--[[
    WARNING: Heads up! This script has not been verified by ScriptBlox. Use at your own risk!
]]



local library = loadstring(game:HttpGet('https://raw.githubusercontent.com/obeseinsect/roblox/main/Ui%20Libraries/Elerium.lua'))()

-- Lock
local NotificationHolder = loadstring(game:HttpGet("https://raw.githubusercontent.com/BocusLuke/UI/main/STX/Module.Lua"))()
local Notification = loadstring(game:HttpGet("https://raw.githubusercontent.com/BocusLuke/UI/main/STX/Client.Lua"))()

local LocalPlayer = game.Players.LocalPlayer

function SendNotification(text)
    Notification:Notify(
        {Title = "Infinity.hook", Description = "by Vac (@movedirection) - "..text},
        {OutlineColor = Color3.fromRGB(0,0,180),Time = 3, Type = "image"},
        {Image = "http://www.roblox.com/asset/?id=6023426923", ImageColor = Color3.fromRGB(0,0,180)}
    )
end

local RunService = game:GetService("RunService")

local AutoAir = false
local AirDelay = 0.15

local hitsounds = {
    {name = "hentai.wav", url = "https://github.com/tickcount/hitsounds/raw/master/hentai2.mp3"},    
    {name = "amongus.wav", url = "https://github.com/tickcount/hitsounds/raw/master/amongus_kill.wav"},
    {name = "bell.wav", url = "https://github.com/nyulachan/nyula/blob/main/Sounds/bell.wav?raw=true"},
    {name = "bepis.wav", url = "https://github.com/nyulachan/nyula/blob/main/Sounds/bepis.wav?raw=true"},
    {name = "bubble.wav", url = "https://github.com/nyulachan/nyula/blob/main/Sounds/bubble.wav?raw=true"},
    {name = "cock.wav", url = "https://github.com/nyulachan/nyula/blob/main/Sounds/cock.wav?raw=true"},
    {name = "cod.wav", url = "https://github.com/nyulachan/nyula/blob/main/Sounds/cod.wav?raw=true"},
    {name = "fatality.wav", url = "https://github.com/nyulachan/nyula/blob/main/Sounds/fatality.wav?raw=true"},
    {name = "phonk.wav", url = "https://github.com/nyulachan/nyula/blob/main/Sounds/phonk.wav?raw=true"},
    {name = "sparkle.wav", url = "https://github.com/nyulachan/nyula/blob/main/Sounds/sparkle.wav?raw=true"}
}

if not isfolder("hitsounds") then
    makefolder("hitsounds")
end

for _, sound in pairs(hitsounds) do
    local path = "hitsounds" .. "/" .. sound.name
    if not isfile(path) then
        writefile(path, game:HttpGet(sound.url))
    end
end

local RunService = game:GetService("RunService")
local player = game.Players.LocalPlayer
local Macro = false

getgenv().Settings = {
    Infinity = {
        Enabled = false,
        DOT = true,
        AIRSHOT = false,
        NOTIF = true,
        AUTOPRED = false,
        AdvancedAutoPred = false,
        FOV = math.huge,
        RESOLVER = false,
        LOCKTYPE = "Namecall",
        TargetStats = false,
        Resolver = {
              Enabled = false,
              Type = "None",
        },
       Camera = {
        Enabled = false,
        HoodCustomsBypass = false,
     },
        OnHit = {
             Enabled = true,
             Hitchams = {
                  Enabled = false,
                  Color = Color3.fromRGB(0,0,180),
                  Transparency = 0,
                  Material = "ForceField",
             },
            Hitsound = {
                  Enabled = false,
                  Sound = "hitsounds/sparkle.wav",
                  Volume = 2,
            },
        }
    }
}

local function VacMacro()
    local vac = player.Character and player.Character:FindFirstChild("HumanoidRootPart")
    if not vac then
        return
    end

    RunService.RenderStepped:Connect(
        function()
            if Macro then
                local camera = workspace.CurrentCamera
                local cameraLook = camera.CFrame.LookVector
                vac.CFrame = CFrame.new(vac.Position, vac.Position + Vector3.new(cameraLook.X, 0, cameraLook.Z))
            end
        end
    )
end

getgenv().DistancesMid = 50
getgenv().DistancesClose = 10
getgenv().AimSpeed = 1
getgenv().CAMPREDICTION = 7
getgenv().CAMJUMPPREDICTION = 10
getgenv().HorizontalSmoothness = 1
getgenv().VerticallSmoothness = 0.5
getgenv().ShakeX = 0
getgenv().ShakeY = 0
getgenv().ShakeZ = 0

getgenv().PREDICTION = 0.14
getgenv().JUMPPREDICTION = 0.09

getgenv().SelectedPart = "HumanoidRootPart" --// LowerTorso, UpperTorso, Head
getgenv().Prediction = "Normal"
getgenv().AutoPredType = "Normal"
local RunService = game:GetService("RunService")
local Players = game:GetService("Players")
local LocalPlayer = Players.LocalPlayer
local Resolver = false

-- Resolver Function
local function ResolverFunction()
    if Resolver then
        for _, Target in pairs(Players:GetPlayers()) do
            if Target ~= LocalPlayer and Target.Character then
                local Humanoid = Target.Character:FindFirstChildOfClass("Humanoid")
                local Head = Target.Character:FindFirstChild("Head")
                if Humanoid and Head then
                    local MoveDir = Humanoid.MoveDirection * 19.6
                    if Head.Velocity ~= MoveDir then
                        Head.Velocity = MoveDir
                        Head.AssemblyLinearVelocity = MoveDir
                    end
                end
            end
        end
    end
end

-- Connect Resolver to Heartbeat
RunService.Heartbeat:Connect(ResolverFunction)


--// Change Prediction,  AutoPrediction Must Be Off
    local lplr = game.Players.LocalPlayer
    local AnchorCount = 0
    local MaxAnchor = 50
 
    local CC = game:GetService"Workspace".CurrentCamera
    local Plr;
    local enabled = false
    
    local mouse = game.Players.LocalPlayer:GetMouse()
    local placemarker = Instance.new("Part", game.Workspace)
 
    function makemarker(Parent, Adornee, Color, Size, Size2)
        local e = Instance.new("BillboardGui", Parent)
        e.Name = "PP"
        e.Adornee = Adornee
        e.Size = UDim2.new(Size, Size2, Size, Size2)
        e.AlwaysOnTop = getgenv().Settings.Infinity.DOT
        local a = Instance.new("Frame", e)
        if getgenv().Settings.Infinity.DOT == true then
        a.Size = UDim2.new(1, 1, 1, 1)
        else
        a.Size = UDim2.new(0, 0, 0, 0)
        end
        if getgenv().Settings.Infinity.DOT == true then
        a.Transparency = 0
        a.BackgroundTransparency = 0
        else
        a.Transparency = 1
        a.BackgroundTransparency = 1
        end
        a.BackgroundColor3 = Color
        local g = Instance.new("UICorner", a)
        if getgenv().Settings.Infinity.DOT == false then
        g.CornerRadius = UDim.new(1, 1)
        else
        g.CornerRadius = UDim.new(1, 1) 
        end
        return(e)
    end
    local data = game.Players:GetPlayers()
    function noob(player)
        local character
        repeat wait() until player.Character
        local handler = makemarker(guimain, player.Character:WaitForChild(SelectedPart), Color3.fromRGB(107, 184, 255), 0.3, 3)
        handler.Name = player.Name
        player.CharacterAdded:connect(function(Char) handler.Adornee = Char:WaitForChild(SelectedPart) end)
 
 
        spawn(function()
            while wait() do
                if player.Character then
                end
            end
        end)
    end
 
    for i = 1, #data do
        if data[i] ~= game.Players.LocalPlayer then
            noob(data[i])
        end
    end
 
    game.Players.PlayerAdded:connect(function(Player)
        noob(Player)
    end)
 
    spawn(function()
        placemarker.Anchored = true
        placemarker.CanCollide = false
        if getgenv().Settings.Infinity.DOT == true then
        placemarker.Size = Vector3.new(0, 0, 0)
        else
        placemarker.Size = Vector3.new(0, 0, 0)
        end
        placemarker.Transparency = 0.75
        if getgenv().Settings.Infinity.DOT then
        makemarker(placemarker, placemarker, Color3.fromRGB(0,0,180), 1, 0)
        end
    end)
 
local gui = Instance.new("ScreenGui")
gui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui") -- Use PlayerGui instead of CoreGui
gui.ResetOnSpawn = false

local function createButton(name, text, position, size, textsize)
    local button = Instance.new("TextButton")
    button.Name = name
    button.Text = text
    button.TextSize = textsize
    button.TextColor3 = Color3.new(1, 1, 1)
    button.BackgroundColor3 = Color3.new(0.1, 0.1, 0.1)
    button.BorderColor3 = Color3.new(255, 0, 0)
    button.BorderSizePixel = 4
    button.BackgroundTransparency = 1
    button.Font = Enum.Font.Arcade
    button.Size = size
    button.Position = position
    button.Parent = gui  -- Attach it to gui
    button.Draggable = true

    local cornerUI = Instance.new("UICorner")
    cornerUI.CornerRadius = UDim.new(0, 5)
    cornerUI.Parent = button

    local textStroke = Instance.new("UIStroke")
    textStroke.Color = Color3.new(0, 0, 0)
    textStroke.Thickness = 1
    textStroke.Parent = button

    return button
end

-- Toggle functionality
local enabled = false
local button = createButton("button", "Infinity", UDim2.new(0.7, 0, 0, 0), UDim2.new(0.3, 0, 0.3, 0), 35)

function hitsound()
    local Hit = Instance.new("Sound")
    Hit.Parent = game.SoundService
    Hit.SoundId = getcustomasset(getgenv().Settings.Infinity.OnHit.Hitsound.Sound)
    Hit.Volume = getgenv().Settings.Infinity.OnHit.Hitsound.Volume
    Hit.Looped = false
    Hit:Play()
    Hit.Ended:Connect(function()                                         Hit:Destroy()
        end)
end

button.MouseButton1Click:Connect(function()
if getgenv().Settings.Infinity.Enabled or getgenv().Settings.Infinity.Camera.Enabled then
            if enabled == true then
                enabled = false
                    Plr = getClosestPlayerToCursor()
button.TextColor3 = Color3.new(1,1,1)
                if getgenv().Settings.Infinity.NOTIF == true then 
 SendNotification("Unlocked")
            end
            else
                Plr = getClosestPlayerToCursor()
                TargetPlayer = tostring(Plr)
                enabled = true
local oldHealt = game.Players[TargetPlayer].Character.Humanoid.Health
                        if getgenv().Settings.Infinity.OnHit.Hitsound.Enabled and Plr ~= nil then

                             game.Players[TargetPlayer].Character.Humanoid.HealthChanged:Connect(function(neHealth)                            
if neHealth < oldHealt then
hitsound()
elseif neHealth > oldHealt then
print("nil")
elseif game.Players[TargetPlayer].Character.Humanoid.Health < 0 then
print("nil")
end
oldHealt = neHealth
end)
end                                      
              
if getgenv().Settings.Infinity.OnHit.Hitchams.Enabled then
   
        if Plr ~= nil then  game.Players[TargetPlayer].Character.Humanoid.HealthChanged:Connect(function(neHealth)
        local Clone = game.Players[TargetPlayer].Character:Clone()
        if neHealth > oldHealt then
            Clone:Destroy()
        end
        if game.Players[TargetPlayer].Character.Humanoid.Health < 0 then
            Clone:Destroy()
        end
        if neHealth < oldHealt then
            -- Main Hit-Chams --
            game.Players[TargetPlayer].Character.Archivable = true
            for _, Obj in next, Clone:GetDescendants() do
                if Obj.Name == "HumanoidRootPart" or Obj:IsA("Humanoid") or Obj:IsA("LocalScript") or Obj:IsA("Script") or Obj:IsA("Decal") then
                    Obj:Destroy()
                elseif Obj:IsA("BasePart") or Obj:IsA("Meshpart") or Obj:IsA("Part") then
                    if Obj.Transparency == 1 then
                        Obj:Destroy()
                    else
                        Obj.CanCollide = false
                        Obj.Anchored = true
                        Obj.Material = getgenv().Settings.Infinity.OnHit.Hitchams.Material
                        Obj.Color = getgenv().Settings.Infinity.OnHit.Hitchams.Color
                        Obj.Transparency = getgenv().Settings.Infinity.OnHit.Hitchams.Transparency
                        Obj.Size = Obj.Size + Vector3.new(0.05, 0.05, 0.05)
                    end
                end
           
            end
            Clone.Parent = game.Workspace
            local start = tick()
            local connection
            connection = game:GetService("RunService").Heartbeat:Connect(function()
                if tick() - start >= 3 then
                    connection:Disconnect()
                    Clone:Destroy()
                end
            end)
        end

            oldHealt = neHealth

    end)
    end
end
button.TextColor3 = Color3.new(0,0,180)
                if getgenv().Settings.Infinity.NOTIF == true then
SendNotification("Target: "..Plr.Character.Humanoid.DisplayName)
                end
            end
   else
  SendNotification("enable the lock u retard")
        end
    end)
 
local TargetStats = Instance.new("ScreenGui")
local Background = Instance.new("Frame")
local Picture = Instance.new("ImageLabel")
local Top = Instance.new("Frame")
local UIGradient = Instance.new("UIGradient")
local UIGradient_2 = Instance.new("UIGradient")
local HealthBarBackground = Instance.new("Frame")
local UIGradient_3 = Instance.new("UIGradient")
local HealthBar = Instance.new("Frame")
local UIGradient_4 = Instance.new("UIGradient")
local NameOfTarget = Instance.new("TextLabel")

spawn(function()
TargetStats.Name = "TargetStats"
TargetStats.Parent = game.CoreGui
TargetStats.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Background.Name = "Background"
Background.Parent = TargetStats
Background.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Background.BorderSizePixel = 0
Background.Position = UDim2.new(0.388957828, 0, 0.700122297, 0)
Background.Size = UDim2.new(0, 358, 0, 71)
Background.Visible = false

Picture.Name = "Picture"
Picture.Parent = Background
Picture.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Picture.BorderSizePixel = 0
Picture.Position = UDim2.new(0.0279329624, 0, 0.0704225376, 0)
Picture.Size = UDim2.new(0, 59, 0, 59)
Picture.Transparency = 1
Picture.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

Top.Name = "Top"
Top.Parent = Background
Top.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Top.BorderSizePixel = 0
Top.Position = UDim2.new(0, 0, -0.101449274, 0)
Top.Size = UDim2.new(0, 358, 0, 7)

UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(0,0,180)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(155,40,0))}
UIGradient.Rotation = 90
UIGradient.Parent = Top

UIGradient_2.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(52, 52, 52)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(0, 0, 0))}
UIGradient_2.Rotation = 90
UIGradient_2.Parent = Background

HealthBarBackground.Name = "HealthBarBackground"
HealthBarBackground.Parent = Background
HealthBarBackground.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
HealthBarBackground.BorderSizePixel = 0
HealthBarBackground.Position = UDim2.new(0.215083793, 0, 0.348234326, 0)
HealthBarBackground.Size = UDim2.new(0, 270, 0, 19)
HealthBarBackground.Transparency = 1

UIGradient_3.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(58, 58, 58)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(30, 30, 30))}
UIGradient_3.Rotation = 90
UIGradient_3.Parent = HealthBarBackground

HealthBar.Name = "HealthBar"
HealthBar.Parent = HealthBarBackground
HealthBar.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
HealthBar.BorderSizePixel = 0
HealthBar.Position = UDim2.new(-0.00336122862, 0, 0.164894029, 0)
HealthBar.Size = UDim2.new(0, 130, 0, 19)

UIGradient_4.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(184, 159, 227)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(102, 88, 156))}
UIGradient_4.Rotation = 90
UIGradient_4.Parent = HealthBar

NameOfTarget.Name = "NameOfTarget"
NameOfTarget.Parent = Background
NameOfTarget.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
NameOfTarget.BackgroundTransparency = 1.000
NameOfTarget.Position = UDim2.new(0.220670387, 0, 0.0704225376, 0)
NameOfTarget.Size = UDim2.new(0, 268, 0, 19)
NameOfTarget.Font = Enum.Font.Code
NameOfTarget.TextColor3 = Color3.fromRGB(255, 255, 255)
NameOfTarget.TextScaled = true
NameOfTarget.TextSize = 14.000
NameOfTarget.TextStrokeTransparency = 0.000
NameOfTarget.TextWrapped = true
end)

local IsAlive = function(GetPlayer)
    return GetPlayer and GetPlayer.Character and GetPlayer.Character:FindFirstChild("HumanoidRootPart") ~= nil and GetPlayer.Character:FindFirstChild("Humanoid") ~= nil and GetPlayer.Character:FindFirstChild("Head") ~= nil and true or false
end

spawn(function()
    while wait() do
        if getgenv().Settings.Infinity.TargetStats and getgenv().Settings.Infinity.Enabled and TargetAimEnabled then
            if Plr and IsAlive(Plr) then
                Background.Visible = true
                NameOfTarget.Text = tostring(Plr.Character.Humanoid.DisplayName).." ["..tostring(Plr.Name).."]"
                Picture.Image  = "rbxthumb://type=AvatarHeadShot&id=" ..Plr.UserId.. "&w=420&h=420"
                HealthBar:TweenSize(UDim2.new(Plr.Character.Humanoid.Health / Plr.Character.Humanoid.MaxHealth, 0, 1, 0), "In", "Linear", 0.25)
                spawn(function()
                    if getgenv().Settings.Infinity.TargetStats == false then
                        Background.Visible = false
                    end
                end)
            end
        else
            Background.Visible = false
        end
    end
end)
 
         --[[
    function getClosestPlayerToCursor()
        local closestPlayer
        local shortestDistance = getgenv().Settings.Infinity.FOV
 
        for i, v in pairs(game.Players:GetPlayers()) do
            if v ~= game.Players.LocalPlayer and v.Character and v.Character:FindFirstChild("Humanoid") and v.Character.Humanoid.Health ~= 0 and v.Character:FindFirstChild("HumanoidRootPart") then
                local pos = CC:WorldToViewportPoint(v.Character.PrimaryPart.Position)
                local magnitude = (Vector2.new(pos.X, pos.Y) - Vector2.new(mouse.X, mouse.Y)).magnitude
                if magnitude < shortestDistance then
                    closestPlayer = v
                    shortestDistance = magnitude
                end
            end
        end
        return closestPlayer
    end
 ]]

function getClosestPlayerToCursor()
    local closestPlayer
    local shortestDistance = getgenv().Settings.Infinity.FOV
    local screenCenter = Vector2.new(workspace.CurrentCamera.ViewportSize.X / 2, workspace.CurrentCamera.ViewportSize.Y / 2)

    for i, v in pairs(game.Players:GetPlayers()) do
        if v ~= game.Players.LocalPlayer and v.Character and v.Character:FindFirstChild("Humanoid") and v.Character.Humanoid.Health > 0 and v.Character:FindFirstChild("HumanoidRootPart") then
            local pos, onScreen = workspace.CurrentCamera:WorldToViewportPoint(v.Character.HumanoidRootPart.Position)
            if onScreen then
                local magnitude = (Vector2.new(pos.X, pos.Y) - screenCenter).Magnitude
                if magnitude < shortestDistance then
                    closestPlayer = v
                    shortestDistance = magnitude
                end
            end
        end
    end
    return closestPlayer
end
 
 local LastCheck = 0
local CheckInterval = 0.05 -- Check every 0.1 seconds

RunService.Heartbeat:Connect(function()
    if AutoAir then
        local now = tick()
        if now - LastCheck >= CheckInterval then
            LastCheck = now

            local Plr = getClosestPlayerToCursor()
            
            if Plr and Plr.Character then
                local humanoid = Plr.Character:FindFirstChild("Humanoid")
                local RootPart = Plr.Character:FindFirstChild("HumanoidRootPart")

                if humanoid and RootPart and humanoid.Health > 5 and RootPart.Velocity.Y > 15 then
                    AutoAir = false 
                    task.wait(AirDelay)
                    local Tool = LocalPlayer.Character and LocalPlayer.Character:FindFirstChildOfClass("Tool")
                    if Tool then
                        Tool:Activate()
                    end
                    AutoAir = true 
                end
            end
        end
    end
end)
local Stats = game:GetService("Stats")

local Piiing = Stats:WaitForChild("Network"):WaitForChild("ServerStatsItem"):WaitForChild("Data Ping")
 
    local pingvalue = nil;
    local split = nil;
    local ping = nil;
    
local LocalHL = Instance.new("Highlight") 
    game:GetService"RunService".Stepped:connect(function()
        if enabled and getgenv(). Settings.Infinity.Enabled and Plr.Character ~= nil and Plr.Character:FindFirstChild("HumanoidRootPart") or enabled and getgenv(). Settings.Infinity.Camera.Enabled and Plr.Character ~= nil and Plr.Character:FindFirstChild("HumanoidRootPart") then
if getgenv().Prediction == "Normal" then
            placemarker.CFrame = CFrame.new(Plr.Character[getgenv().SelectedPart].Position+Vector3.new(Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.X*getgenv().PREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Y*getgenv().JUMPPREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Z*getgenv().PREDICTION))         
elseif getgenv().Prediction == "Yun" then
            placemarker.CFrame = CFrame.new(Plr.Character[getgenv().SelectedPart].Position+Vector3.new(Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.X*getgenv().PREDICTION/10,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Y*getgenv().JUMPPREDICTION/10,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Z*getgenv().PREDICTION/10))
end

LocalHL.Parent = Plr.Character
LocalHL.FillTransparency = 0.2
LocalHL.FillColor = Color3.fromRGB(0,0,180)
LocalHL.OutlineColor = Color3.fromRGB(255,255,255)

        else
            placemarker.CFrame = CFrame.new(0, 9999, 0)
    
          LocalHL.Parent = nil
        
        end
pingvalue = game:GetService("Stats").Network.ServerStatsItem["Data Ping"]:GetValueString()
split = string.split(pingvalue,'(')
ping = tonumber(split[1])

if getgenv().Settings.Infinity.AdvancedAutoPred == true and enabled then
    getgenv().CAMJUMPPREDICTION = tostring(ping/1500)
    if ping > 300 then
        getgenv().CAMPREDICTION = 0.434
    elseif ping > 290 then
        getgenv().CAMPREDICTION = 0.422
    elseif ping > 280 then
        getgenv().CAMPREDICTION = 0.44
    elseif ping > 270 then
        getgenv().CAMPREDICTION = 0.4385
    elseif ping > 260 then
        getgenv().CAMPREDICTION = 0.4158
    elseif ping > 250 then
        getgenv().CAMPREDICTION = 0.3148
    elseif ping > 240 then
        getgenv().CAMPREDICTION = 0.34
    elseif ping > 230 then
        getgenv().CAMPREDICTION = 0.33
    elseif ping > 220 then
        getgenv().CAMPREDICTION = 0.30
    elseif ping > 210 then
        getgenv().CAMPREDICTION = 0.295
    elseif ping > 200 then
        getgenv().CAMPREDICTION = 0.2915
    elseif ping > 190 then
        getgenv().CAMPREDICTION = 0.2911
    elseif ping > 180 then
        getgenv().CAMPREDICTION = 0.28291198328
    elseif ping > 180 then
        getgenv().CAMPREDICTION = 0.25291198328
    elseif ping > 170 then
        getgenv().CAMPREDICTION = 0.28
    elseif ping > 160 then
        getgenv().CAMPREDICTION = 0.2754
    elseif ping  >150 then
        getgenv().CAMPREDICTION = 0.271
    elseif ping  >140 then
        getgenv().CAMPREDICTION = 0.25
       elseif ping > 130 then
        getgenv().CAMPREDICTION = 0.12057
    elseif ping > 120 then
        getgenv().CAMPREDICTION = 0.1966
    elseif ping > 110 then
        getgenv().CAMPREDICTION = 0.18642271
    elseif ping > 100 then
        getgenv().CAMPREDICTION = 0.18533
    elseif ping > 90 then
        getgenv().CAMPREDICTION = 0.1749573
    elseif ping > 80 then
        getgenv().CAMPREDICTION = 0.1745
    elseif ping > 70 then
        getgenv().CAMPREDICTION = 0.1642
    elseif ping > 50 then
        getgenv().CAMPREDICTION = 0.14267
    elseif ping > 40 then
        getgenv().CAMPREDICTION = 0.142
    elseif ping > 30 then
        getgenv().CAMPREDICTION = 0.1312
   elseif ping > 20 then
        getgenv().CAMPREDICTION = 0.1312
   elseif ping > 10 then
        getgenv().CAMPREDICTION = 0.1287
   end
end
if getgenv().Settings.Infinity.AUTOPRED == true and enabled then
if getgenv().AutoPredType == "Normal" then
if getgenv().Prediction == "Normal" then
getgenv().JUMPPREDICTION = tostring(ping/1500)
if ping <200 then
        getgenv().PREDICTION = 0.2198343243234332
    elseif ping < 170 then
        getgenv().PREDICTION = 0.2165713
    elseif ping < 160 then
        getgenv().PREDICTION = 0.16242
    elseif ping < 150 then
        getgenv().PREDICTION = 0.158041
    elseif ping < 140 then
        getgenv().PREDICTION = 0.155313
    elseif ping < 130 then
        getgenv().PREDICTION = 0.152692
    elseif ping < 120 then
        getgenv().PREDICTION = 0.153017
    elseif ping < 110 then
        getgenv().PREDICTION = 0.15165
    elseif ping < 100 then
  getgenv().PREDICTION = 0.1543987
 elseif ping < 80 then
  getgenv().PREDICTION = 0.151340
 elseif ping < 70 then
  getgenv().PREDICTION = 0.143633
 elseif ping < 65 then
  getgenv().PREDICTION = 0.1374236
 elseif ping < 50 then
  getgenv().PREDICTION = 0.13644
 elseif ping < 30 then
  getgenv().PREDICTION = 0.12452476
end
end
elseif getgenv().AutoPredType == "Beta AutoPred" then
    if getgenv().Prediction == "Normal" then
    getgenv().JUMPPREDICTION = tostring(ping/1500)
    if ping > 300 then
        getgenv().PREDICTION = 0.434
    elseif ping > 290 then
        getgenv().PREDICTION = 0.422
    elseif ping > 280 then
        getgenv().PREDICTION = 0.44
    elseif ping > 270 then
        getgenv().PREDICTION = 0.4385
    elseif ping > 260 then
        getgenv().PREDICTION = 0.4158
    elseif ping > 250 then
        getgenv().PREDICTION = 0.3148
    elseif ping > 240 then
        getgenv().PREDICTION = 0.34
    elseif ping > 230 then
        getgenv().PREDICTION = 0.33
    elseif ping > 220 then
        getgenv().PREDICTION = 0.30
    elseif ping > 210 then
        getgenv().PREDICTION = 0.295
    elseif ping > 200 then
        getgenv().PREDICTION = 0.2915
    elseif ping > 190 then
        getgenv().PREDICTION = 0.2911
    elseif ping > 180 then
        getgenv().PREDICTION = 0.19291198328
    elseif ping > 180 then
        getgenv().PREDICTION = 0.19291198328
    elseif ping > 170 then
        getgenv().PREDICTION = 0.18
    elseif ping > 160 then
        getgenv().PREDICTION = 0.1754
    elseif ping  >150 then
        getgenv().PREDICTION = 0.171
    elseif ping  >140 then
        getgenv().PREDICTION = 0.17
       elseif ping > 130 then
        getgenv().PREDICTION = 0.1657
    elseif ping > 120 then
        getgenv().PREDICTION = 0.1866
    elseif ping > 110 then
        getgenv().PREDICTION = 0.17642271
    elseif ping > 100 then
        getgenv().PREDICTION = 0.1733
    elseif ping > 90 then
        getgenv().PREDICTION = 0.1649573
    elseif ping > 80 then
        getgenv().PREDICTION = 0.1545
    elseif ping > 70 then
        getgenv().PREDICTION = 0.142
    elseif ping > 50 then
        getgenv().PREDICTION = 0.1267
    elseif ping > 40 then
        getgenv().PREDICTION = 0.12
    elseif ping > 30 then
        getgenv().PREDICTION = 0.112
   elseif ping > 20 then
        getgenv().PREDICTION = 0.102
   elseif ping > 10 then
        getgenv().PREDICTION = 0.087
   end
end
elseif getgenv().AutoPredType == "Old Azure" then
if getgenv().Prediction == "Normal" then
 getgenv().JUMPPREDICTION = tostring(ping/1500)
   if ping < 360 then
  getgenv().PREDICTION = 0.16537
  elseif ping < 270 then
     getgenv().PREDICTION = 0.195566
     elseif ping < 260 then
         getgenv().PREDICTION = 0.175566
      elseif ping < 250 then
         getgenv().PREDICTION = 0.1651
              elseif ping < 240 then
           getgenv().PREDICTION = 0.16780
                elseif ping < 230 then
                    getgenv().PREDICTION = 0.15692
                elseif ping < 220 then
                    getgenv().PREDICTION = 0.165566
                elseif ping < 210 then
                    getgenv().PREDICTION = 0.16780
                elseif ping < 200 then
                    getgenv().PREDICTION = 0.165566
                elseif ping < 190 then
                    getgenv().PREDICTION = 0.166547
                elseif ping < 180 then
                    getgenv().PREDICTION = 0.19284
                elseif ping < 170 then
                    getgenv().PREDICTION = 0.1923111 
                elseif ping < 160 then
                    getgenv().PREDICTION = 0.16
                elseif ping < 150 then
                    getgenv().PREDICTION = 0.15
                elseif ping < 140 then
                    getgenv().PREDICTION = 0.1223333
                elseif ping < 130 then
                    getgenv().PREDICTION = 0.156692
                elseif ping < 120 then
                    getgenv().PREDICTION = 0.143765
                elseif ping < 110 then
                    getgenv().PREDICTION = 0.1455
                elseif ping < 100 then
                    getgenv().PREDICTION = 0.130340
                elseif ping < 90 then
                    getgenv().PREDICTION = 0.136
                elseif ping < 80 then
                    getgenv().PREDICTION = 0.1347
                elseif ping < 70 then
                    getgenv().PREDICTION = 0.119
                elseif ping < 60 then
                    getgenv().PREDICTION = 0.12731
                elseif ping < 50 then
                    getgenv().PREDICTION = 0.127668
                elseif ping < 40 then
                    getgenv().PREDICTION = 0.125
                elseif ping < 30 then
                    getgenv().PREDICTION = 0.11
                elseif ping < 20 then
                    getgenv().PREDICTION = 0.12588
                elseif ping < 10 then
                    getgenv().PREDICTION = 0.09
                end
end
elseif getgenv().AutoPredType == "Fake Celex" then
    if getgenv().Prediction == "Normal" then
        getgenv().JUMPPREDICTION = tostring(ping/1500)
                if ping > 190 then
                    getgenv().PREDICTION = 0.206547
                elseif ping > 180 then
                    getgenv().PREDICTION = 0.19284
                elseif ping > 170 then
                    getgenv().PREDICTION = 0.1923111
                elseif ping > 160 then
                    getgenv().PREDICTION = 0.1823111
                elseif ping > 150 then
                    getgenv().PREDICTION = 0.171
                elseif ping > 140 then
                    getgenv().PREDICTION = 0.165773
                elseif ping > 130 then
                    getgenv().PREDICTION = 0.14333322
                elseif ping > 120 then
                    getgenv().PREDICTION = 0.143765
                elseif ping > 110 then
                    getgenv().PREDICTION = 0.1455
                elseif ping > 100 then
                    getgenv().PREDICTION = 0.143987
                elseif ping > 90 then
                    getgenv().PREDICTION = 0.14215
                elseif ping > 80 then
                    getgenv().PREDICTION = 0.141340
                elseif ping > 70 then
                    getgenv().PREDICTION = 0.13633
                elseif ping > 60 then
                    getgenv().PREDICTION = 0.12731
                elseif ping > 50 then
                    getgenv().PREDICTION = 0.127668
                elseif ping > 40 then
                    getgenv().PREDICTION = 0.125
                elseif ping > 30 then
                    getgenv().PREDICTION = 0.1261
                elseif ping > 20 then
                    getgenv().PREDICTION = 0.12588
                elseif ping > 10 then
                    getgenv().PREDICTION = 0.09
                end
    end

end
end

if getgenv().Settings.Infinity.Resolver.Enabled then
if getgenv().Settings.Infinity.Resolver.Type == "Delta Time" then
print("wsg")
end
if getgenv().Settings.Infinity.Resolver.Type == "Recalculator" then
print("wsg")
end
if getgenv().Settings.Infinity.Resolver.Type == "No Y Velocity" then
print("wsg")
end
end
    end)


game:GetService"RunService".Stepped:connect(function()
    if enabled and getgenv().Settings.Infinity.Camera.Enabled then
        if Plr ~= nil then
            local shakeOffset = Vector3.new(
                math.random(-getgenv().ShakeX, getgenv().ShakeX),
                math.random(-getgenv().ShakeY, getgenv().ShakeY),
                math.random(-getgenv().ShakeZ, getgenv().ShakeZ)
            ) * 0.1
local HorizontalLookPosition = CFrame.new(CC.CFrame.p, Plr.Character[getgenv().SelectedPart].CFrame.Position+(Vector3.new(Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.X*getgenv().CAMPREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Y*getgenv().CAMJUMPPREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Z*getgenv().CAMPREDICTION))+shakeOffset)
      CC.CFrame = CC.CFrame:Lerp(HorizontalLookPosition, getgenv().HorizontalSmoothness)
    end
end
end)

    local mt = getrawmetatable(game)
    local old = mt.__namecall
    setreadonly(mt, false)
    mt.__namecall = newcclosure(function(...)
        local args = {...}
        local vap = {"UpdateMousePos", "GetMousePos", "MousePos", "MOUSE", "MousePosUpdate"}
        if enabled and getnamecallmethod() == "FireServer" and table.find(vap, args[2]) and getgenv().Settings.Infinity.Enabled and Plr.Character ~= nil and getgenv().Settings.Infinity.LOCKTYPE == "Namecall" then
            if getgenv().Prediction == "Normal" then
            args[3] = Plr.Character[getgenv().SelectedPart].Position+Vector3.new(Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.X*getgenv().PREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Y*getgenv().JUMPPREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Z*getgenv().PREDICTION)
            elseif getgenv().Prediction == "Yun" then
            args[3] = Plr.Character[getgenv().SelectedPart].Position+Vector3.new(Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.X*getgenv().PREDICTION/10,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Y*getgenv().JUMPPREDICTION/10,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Z*getgenv().PREDICTION/10)
            else
 
            args[3] = Plr.Character[SelectedPart].Position
 
            end
 
            return old(unpack(args))
        end
        return old(...)
    end)

local Hooks = {}
local Client = game.Players.LocalPlayer

Hooks[1] = hookmetamethod(Client:GetMouse(), "__index", newcclosure(function(self, index)
    if index == "Hit" and getgenv().Settings.Infinity.LOCKTYPE == "Index" and enabled and Plr.Character ~= nil and getgenv().Settings.Infinity.Enabled then
            local position = CFrame.new(Plr.Character[getgenv().SelectedPart].Position+Vector3.new(Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.X*getgenv().PREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Y*getgenv().JUMPPREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Z*getgenv().PREDICTION))
            return position
        
    end
    return Hooks[1](self, index)
end))

getgenv().CFrameDesync = {
           Enabled = false,
           AnglesEnabled = false,
           Type = "Random",
           Visualize = false,
           VisualizeColor = Color3.fromRGB(255,255,255),
           Random = {
               X = 5,
               Y = 5,
               Z = 5,
               AnglesX = 5,
               AnglesY = 5,
               AnglesZ = 5,
               },
           Custom = {
               X = 5,
               Y = 5,
               Z = 5,
               AnglesX = 5,
               AnglesY = 5,
               AnglesZ = 5,
               },
     TargetStrafe = {
               Speed = 10,
               Height = 10,
               Distance = 7,
               },
}

local straight = {
         Visuals = {},
         Desync = {},
         Hooks = {},
         Connections = {}
}



local RunService = game:GetService("RunService")


task.spawn(function()
straight.Visuals["R6Dummy"] = game:GetObjects("rbxassetid://9474737816")[1]; straight.Visuals["R6Dummy"].Head.Face:Destroy(); for i, v in pairs(straight.Visuals["R6Dummy"]:GetChildren()) do v.Transparency = v.Name == "HumanoidRootPart" and 1 or 0.70; v.Material = "Neon"; v.Color = Color3.fromRGB(255, 255, 255); v.CanCollide = false; v.Anchored = false end
end)

local Utility = {}

do --// Utility Functions
    function Utility:Connection(connectionType, connectionCallback)
        local connection = connectionType:Connect(connectionCallback)
        straight.Connections[#straight.Connections + 1] = connection
        return connection
    end
end

Utility:Connection(RunService.PostSimulation, function()
if getgenv().CFrameDesync.AnglesEnabled or getgenv().CFrameDesync.Enabled then
        straight.Desync[1] = lplr.Character.HumanoidRootPart.CFrame
        local cframe = lplr.Character.HumanoidRootPart.CFrame
        if getgenv().CFrameDesync.Enabled then
            if getgenv().CFrameDesync.Type == "Random" then
                cframe = cframe * CFrame.new(math.random(-getgenv().CFrameDesync.Random.X, getgenv().CFrameDesync.Random.X), math.random(-getgenv().CFrameDesync.Random.Y, getgenv().CFrameDesync.Random.Y), math.random(-getgenv().CFrameDesync.Random.Z, getgenv().CFrameDesync.Random.Z))
            elseif getgenv().CFrameDesync.Type == "Custom" then
                cframe = cframe * CFrame.new(getgenv().CFrameDesync.Custom.X, getgenv().CFrameDesync.Custom.Y, getgenv().CFrameDesync.Custom.Z)
            elseif getgenv().CFrameDesync.Type == "Mouse" then
                cframe = CFrame.new(lplr:GetMouse().Hit.Position)
            elseif getgenv().CFrameDesync.Type == "Target Strafe" then
            if enabled and Plr ~= nil then
                local currentTime = tick() 
                cframe = CFrame.new(Plr.Character[getgenv().SelectedPart].Position) * CFrame.Angles(0, 2 * math.pi * currentTime * getgenv().CFrameDesync.TargetStrafe.Speed % (2 * math.pi), 0) * CFrame.new(0, getgenv().CFrameDesync.TargetStrafe.Height, getgenv().CFrameDesync.TargetStrafe.Distance)
            elseif getgenv.CFrameDesync.Type == "Local Strafe" then
                local currentTime = tick() 
                cframe = CFrame.new(lplr.Character.HumanoidRootPart.Position) * CFrame.Angles(0, 2 * math.pi * currentTime * getgenv.CFrameDesync.TargetStrafe.Speed % (2 * math.pi), 0) * CFrame.new(0, getgenv.CFrameDesync.TargetStrafe.Height, getgenv().CFrameDesync.TargetStrafe.Distance)
                end
        end

        if getgenv().CFrameDesync.Visualize then
            straight.Visuals["R6Dummy"].Parent = workspace
            straight.Visuals["R6Dummy"].HumanoidRootPart.Velocity = Vector3.new()
            straight.Visuals["R6Dummy"]:SetPrimaryPartCFrame(cframe)
            for i, v in pairs(straight.Visuals["R6Dummy"]:GetChildren()) do v.Transparency = v.Name == "HumanoidRootPart" and 1 or 0.70; v.Material = "Neon"; v.Color = getgenv().CFrameDesync.VisualizeColor; v.CanCollide = false; v.Anchored = false end
        else
            straight.Visuals["R6Dummy"].Parent = nil
        end

        if getgenv().CFrameDesync.AnglesEnabled then
            if getgenv().CFrameDesync.Type == "Random" then
                cframe = cframe * CFrame.Angles(math.rad(math.random(getgenv().CFrameDesync.Random.AnglesX)), math.rad(math.random(getgenv().CFrameDesync.Random.AnglesY)), math.rad(math.random(getgenv().CFrameDesync.Random.AnglesZ)))
            elseif getgenv().CFrameDesync.Type == "Custom" then
                cframe = cframe * CFrame.Angles(math.rad(getgenv().CFrameDesync.Custom.AnglesX), math.rad(getgenv().CFrameDesync.Custom.AnglesY), math.rad(getgenv().CFrameDesync.Custom.AnglesZ))
            end
        end
        lplr.Character.HumanoidRootPart.CFrame = cframe
        RunService.RenderStepped:Wait()
        lplr.Character.HumanoidRootPart.CFrame = straight.Desync[1]
    else
        if straight.Visuals["R6Dummy"].Parent ~= nil then
            straight.Visuals["R6Dummy"].Parent = nil
        end
    end
end
end)

--// Hooks
local MainHookingFunctionsTick = tick()
--
straight.Hooks[1] = hookmetamethod(game, "__index", newcclosure(function(self, key)
    if not checkcaller() then
        if key == "CFrame" and straight.Desync[1] and (getgenv().CFrameDesync.AnglesEnabled or getgenv().CFrameDesync.Enabled) and lplr.Character and lplr.Character:FindFirstChild("HumanoidRootPart") and lplr.Character:FindFirstChild("Humanoid") and lplr.Character:FindFirstChild("Humanoid").Health > 0 then
            if self == lplr.Character.HumanoidRootPart then
                return straight.Desync[1] or CFrame.new()
            elseif self == lplr.Character.Head then
                return straight.Desync[1] and straight.Desync[1] + Vector3.new(0, lplr.Character.HumanoidRootPart.Size / 2 + 0.5, 0) or CFrame.new()
            end
        end
    end
    return straight.Hooks[1](self, key)
end))

if getgenv().Settings.Infinity.Camera.HoodCustomsBypass == true then
for _, con in next, getconnections(workspace.CurrentCamera.Changed) do
  task.wait(0.000001)
    con:Disable()

end


for _, con in next, getconnections(workspace.CurrentCamera:GetPropertyChangedSignal("CFrame")) do
   task.wait(0.000001)
    con:Disable()

end
end
--[[
 for _, key in next, getgc(true) do 

        local function updateKey(instanceType)

            if pcall(function() return rawget(key, instanceType) end) and typeof(rawget(key, instanceType)) == 'table' and (rawget(key, instanceType))[1] == 'kick' then
                key.tvk = {
                    'kick',
                    function() 
                        return game.Workspace:WaitForChild('')
                    end
                }
            end
        end

        updateKey('indexInstance')
        updateKey('namecallInstance')
    end
]]

loadstring(game:HttpGet("https://raw.githubusercontent.com/Pixeluted/adoniscries/main/Source.lua",true))()

do -- Example UI
    local Window = library:AddWindow("infinity.hook", {
        main_color = Color3.fromRGB(0,0,180),
        min_size = Vector2.new(500, 600),
        toggle_key = Enum.KeyCode.RightShift,
        can_resize = true,
    })

    local Tab = Window:AddTab("Camera Lock")
    local Teb = Window:AddTab("Target Lock")
    local Tib = Window:AddTab("Miscs")
    local Tub = Window:AddTab("Debugging")
    local Taab = Window:AddTab("Configuration")



    do -- Elements
        Tab:AddLabel("Configuration")

    local Lenabled = Tab:AddSwitch("Enabled", function(bool)
        getgenv().Settings.Infinity.Camera.Enabled = bool
        end)
        Lenabled:Set(false)

    Tab:AddTextBox("Horizontal Prediction", function(text)
    getgenv().CAMPREDICTION = text
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })
    
    Tab:AddTextBox("Vertical Prediction", function(text)

        getgenv().CAMJUMPPREDICTION = text

        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })

    Tab:AddTextBox("Smoothness Value", function(text)
        getgenv().HorizontalSmoothness = text
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })
    Tab:AddTextBox("Aim Speed Value | 1 = Normal", function(text)
        getgenv().AimSpeed = text
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })
local ShakeFolder = Tab:AddFolder("Shake Configuration")
    ShakeFolder:AddTextBox("X Value", function(text)
        getgenv().ShakeX = text
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })
    ShakeFolder:AddTextBox("Y Value", function(text)
        getgenv().ShakeY = text
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })
    ShakeFolder:AddTextBox("Z Value", function(text)
        getgenv().ShakeZ = text
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })

local thingsetup = Tab:AddSwitch("Auto Prediction", function(bool)
    getgenv().Settings.Infinity.AdvancedAutoPred = bool
end)
thingsetup:Set(false)

    local Dropdown = Tab:AddDropdown("Target Part", function(object)
        getgenv().SelectedPart = object
        end)
Dropdown:Add("HumanoidRootPart")
Dropdown:Add("UpperTorso")
Dropdown:Add("LowerTorso")
Dropdown:Add("Head")
--// Target Lock
    Teb:AddLabel("Configuration")
    local bled = Teb:AddSwitch("Enabled", function(bool)
    getgenv().Settings.Infinity.Enabled = bool
    end)
bled:Set(false)
        local TypeThing = Teb:AddDropdown("Aim Type", function(object)
            getgenv().Settings.Infinity.LOCKTYPE = object
        end)
TypeThing:Add("Namecall")
TypeThing:Add("Index")









        local PredTypeThing = Teb:AddDropdown("Prediction Type", function(object)
            getgenv().Prediction = object
        end)
PredTypeThing:Add("Normal")
PredTypeThing:Add("Yun")
local AutoPredTypeThing = Teb:AddDropdown("AutoPred Type", function(object)
getgenv().AutoPredType = object
end)
AutoPredTypeThing:Add("Normal")
AutoPredTypeThing:Add("Beta AutoPred")
AutoPredTypeThing:Add("Fake Celex")
AutoPredTypeThing:Add("Old Azure")

    Teb:AddTextBox("Horizontal Prediction", function(text)
    getgenv().PREDICTION = text
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })
    
    Teb:AddTextBox("Vertical Prediction", function(text)
     getgenv().JUMPPREDICTION = text
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })

    Teb:AddTextBox("Jump Offset", function(text)
            print(text)
        end, 
    {
    ["clear"] = false, -- Default: true (options are optional)
    })

        local Swiitch = Teb:AddSwitch("Auto Prediction", function(bool)
            getgenv().Settings.Infinity.AUTOPRED = bool
        end)
        Swiitch:Set(false)

        local Droopdown = Teb:AddDropdown("Target Part", function(object)
        getgenv().SelectedPart = object
        end)

Droopdown:Add("HumanoidRootPart")
Droopdown:Add("UpperTorso")
Droopdown:Add("LowerTorso")
Droopdown:Add("Head")

--// Miscs

local OnHitFolder = Tib:AddFolder("On Hit")
    OnHitFolder:AddLabel("On Hit")

local HitsoundsFolder = OnHitFolder:AddFolder("Hitsounds")

local HitsoundEnabledThing = HitsoundsFolder:AddSwitch("Enabled", function(bool)
        getgenv().Settings.Infinity.OnHit.Hitsound.Enabled = bool
    end)
HitsoundEnabledThing:Set(false)

local SoundsOptions = HitsoundsFolder:AddDropdown("Sound Effect", function(object)
        getgenv().Settings.Infinity.OnHit.Hitsound.Sound = object
        end)

SoundsOptions:Add("hitsounds/hentai.wav")
SoundsOptions:Add("hitsounds/amongus.wav")
SoundsOptions:Add("hitsounds/sparkle.wav")
SoundsOptions:Add("hitsounds/bell.wav")
SoundsOptions:Add("hitsounds/bepis.wav")
SoundsOptions:Add("hitsounds/bubble.wav")
SoundsOptions:Add("hitsounds/cock.wav")
SoundsOptions:Add("hitsounds/cod.wav")
SoundsOptions:Add("hitsounds/fatality.wav")
SoundsOptions:Add("hitsounds/phonk.wav")

local HitchamsFolder = OnHitFolder:AddFolder("Hitchams")

local HitchamsEnabledThing = HitchamsFolder:AddSwitch("Enabled", function(bool)
        getgenv().Settings.Infinity.OnHit.Hitchams.Enabled = bool
end)
HitchamsEnabledThing:Set(false)

local MaterialOptions = HitchamsFolder:AddDropdown("Material", function(object)
        getgenv().Settings.Infinity.OnHit.Hitchams.Material = object
        end)

MaterialOptions:Add("ForceField")
MaterialOptions:Add("Neon")
MaterialOptions:Add("Glass")
MaterialOptions:Add("Plastic")
MaterialOptions:Add("Brick")

local AntiFolder = Tib:AddFolder("Anti Lock")
        AntiFolder:AddLabel("not yet")

local CSyncFolder = Tib:AddFolder("CFrame Desync")
CSyncFolder:AddLabel("CFrame Desync")
local TheDesyncBegins = CSyncFolder:AddSwitch("Enabled", function(bool)
    getgenv().CFrameDesync.Enabled = bool
end)
TheDesyncBegins:Set(false)
local TVManTitan = CSyncFolder:AddSwitch("Visualize", function(bool)

    getgenv().CFrameDesync.Visualize = bool

end)
TVManTitan:Set(false)
local CFrameSyncOptions = CSyncFolder:AddDropdown("Type", function(object)
getgenv().CFrameDesync.Type = object
end)

CFrameSyncOptions:Add("Random")
CFrameSyncOptions:Add("Custom")
CFrameSyncOptions:Add("Mouse")
CFrameSyncOptions:Add("Target Strafe")
CFrameSyncOptions:Add("Local Strafe")

local RandomizedSection = CSyncFolder:AddFolder("Random Configuration")
RandomizedSection:AddTextBox("X", function(text)
getgenv().CFrameDesync.Random.X = text
end, 
{
["clear"] = false, -- Default: true (options are optional)
})
RandomizedSection:AddTextBox("Y", function(text)

getgenv().CFrameDesync.Random.Y = text

end, 
{
["clear"] = false, -- Default: true (options are optional)
})
RandomizedSection:AddTextBox("Z", function(text)
getgenv().CFrameDesync.Random.Z = text
end, 
{
["clear"] = false, -- Default: true (options are optional)
})
local CustomTypeSection = CSyncFolder:AddFolder("Custom Configuration")

CustomTypeSection:AddTextBox("X", function(text)

getgenv().CFrameDesync.Custom.X = text
end, 
{
["clear"] = false, -- Default: true (options are optional)
})
CustomTypeSection:AddTextBox("Y", function(text)

getgenv().CFrameDesync.Custom.Y = text

end, 
{
["clear"] = false, -- Default: true (options are optional)
})
CustomTypeSection:AddTextBox("Z", function(text)
getgenv().CFrameDesync.Custom.Z = text
end, 
{
["clear"] = false, -- Default: true (options are optional)
})
local StrafeFolder = CSyncFolder:AddFolder("Strafe Configuration")
StrafeFolder:AddTextBox("Speed", function(text)
getgenv().CFrameDesync.TargetStrafe.Speed = text
end, 
{
["clear"] = false, -- Default: true (options are optional)
})
StrafeFolder:AddTextBox("Height", function(text)
getgenv().CFrameDesync.TargetStrafe.Height = text
end, 
{
["clear"] = false, -- Default: true (options are optional)
})
StrafeFolder:AddTextBox("Distance", function(text)

getgenv().CFrameDesync.TargetStrafe.Distance = text

end, 
{
["clear"] = false, -- Default: true (options are optional)
})





local ActualMiscs = Tib:AddFolder("Others")
ActualMiscs:AddLabel("Miscellaneous")
ActualMiscs:AddButton("Load CFrame Speed Button", function()
-- Initial values
getgenv().Speed = false
getgenv().SpeedAmount = 2
-- Create a basic GUI
local ToggleButton = createButton("button", "Speed", UDim2.new(0.7, 0, 0, 0), UDim2.new(0.2, 0, 0.2, 0), 23.3333)

local function onButtonClicked()
    getgenv().Speed = not getgenv().Speed
    ToggleButton.TextColor3 = getgenv().Speed and Color3.new(0,0,180) or Color3.new(1,1,1)
end
ToggleButton.MouseButton1Click:Connect(onButtonClicked)
-- Your existing code modified for the GUI
game:GetService("RunService").Stepped:Connect(function()
    if getgenv().Speed then
        lplr.Character.HumanoidRootPart.CFrame = lplr.Character.HumanoidRootPart.CFrame + lplr.Character.Humanoid.MoveDirection * getgenv().SpeedAmount
    end
end)
end)

ActualMiscs:AddTextBox("Speed Amount", function(text)
getgenv().SpeedAmount = text
end, 
{
["clear"] = false, -- Default: true (options are optional)
})

ActualMiscs:AddButton("Load Macro Button", function()
    -- Create the external macro button
    local MacroButton = createButton("MacroButton", "Macro", UDim2.new(0.7, 0, 0, 0), UDim2.new(0.2, 0, 0.2, 0), 23.333)

    -- Function to toggle the macro
    local function ToggleMacro()
        Macro = not Macro
        MacroButton.TextColor3 = Macro and Color3.new(0, 0, 180) or Color3.new(1, 1, 1)
        if Macro then
            VacMacro()  -- Start the macro
        end
    end

    -- Connect the button click to the toggle function
    MacroButton.MouseButton1Click:Connect(ToggleMacro)
end)

local ResolverSwitch = ActualMiscs:AddSwitch("Resolver", function(bool)
   Resolver = bool
end)
ResolverSwitch:Set(false)

local DelaySwitch = ActualMiscs:AddSwitch("No Delay", function(bool)
    getgenv().NoDelay = bool
end)
DelaySwitch:Set(false)

-- Inside the ActualMiscs folder
local AutoAirSwitch = ActualMiscs:AddSwitch("Auto Air", function(bool)
    AutoAir = bool
end)
AutoAirSwitch:Set(false) -- Default to OFF

local AirDelayTextBox = ActualMiscs:AddTextBox("Air Delay", function(text)
    AirDelay = tonumber(text) or 0.01 -- Set the AirDelay value, default to 0.01 if invalid input
end, 
{
    ["clear"] = false, -- Default: true (options are optional)
})

ActualMiscs:AddButton("Load Rightclick Button", function()

local Toggle1Button = createButton("button", "RightClick", UDim2.new(0.7, 0, 0, 0), UDim2.new(0.2, 0, 0.2, 0), 23.333)

-- Function to send the keybind
local function OnButtonClick()
    local vim = game:GetService("VirtualInputManager")
    vim:SendKeyEvent(true, "ButtonL2", false, game)
end

-- Event connection
Toggle1Button.MouseButton1Click:Connect(OnButtonClick)
end)


if getgenv().NoDelay == true then
game:GetService("CorePackages").Packages:Destroy()
end
local BypassFolder = Tib:AddFolder("Anti Cheat Bypass")
BypassFolder:AddLabel("Anti Cheats")
local Bypass1 = BypassFolder:AddSwitch("Hood Custom Camlock Bypass", function(bool)
    getgenv().Settings.Infinity.Camera.HoodCustomsBypass = bool
end)
Bypass1:Set(false)
local Bypass2 = BypassFolder:AddSwitch("DaHood Bypass", function(bool)
    getgenv().DaHoodBypass = bool
end)
Bypass2:Set(false)
local Bypass3 = BypassFolder:AddSwitch("Untitled Hood Bypass", function(bool)
    getgenv().UntitledHoodBypass = bool
end)
Bypass3:Set(false)
if getgenv().UntitledHoodBypass == true then
local _1;
_1 = hookmetamethod(game, "__namecall", function(self, ...)
    if not checkcaller() and getnamecallmethod() == "FireServer" then
        if tostring(self.Name) == ".gg/untitledhood" then
            local args = {...}
            if tostring(args[1]) == "ForceDetect" or tostring(args[1]) == "TeleportDetect" or tostring(args[1]) == "GUI_CHECK" then
                return print("anticheat detected something sussy");
            end
        end
    end
    return _1(self, ...);
end)
end

if getgenv().DaHoodBypass == true then
assert(getrawmetatable)
grm = getrawmetatable(game)
setreadonly(grm, false)
old = grm.__namecall
grm.__namecall = newcclosure(function(self, ...)
    local args = {...}
    if tostring(args[1]) == "TeleportDetect" then
        return
    elseif tostring(args[1]) == "CHECKER_1" then
        return
    elseif tostring(args[1]) == "CHECKER" then
        return
    elseif tostring(args[1]) == "GUI_CHECK" then
        return
    elseif tostring(args[1]) == "OneMoreTime" then
        return
    elseif tostring(args[1]) == "checkingSPEED" then
        return
    elseif tostring(args[1]) == "BANREMOTE" then
        return
    elseif tostring(args[1]) == "PERMAIDBAN" then
        return
    elseif tostring(args[1]) == "KICKREMOTE" then
        return
    elseif tostring(args[1]) == "BR_KICKPC" then
        return
    elseif tostring(args[1]) == "BR_KICKMOBILE" then
        return
    end
    return old(self, ...)
end)
end
--// Config System



--// Quick Execute
    local Console = Tub:AddConsole({
            ["y"] = 100,
            ["source"] = "Lua",
        })
        Console:Set("-- no comp infinity.hook\nfor i = 1, 9 do \n    print(i)\nend")
        print(Console:Get())
        local HA = Tub:AddHorizontalAlignment()
        HA:AddButton("Execute", function()
            loadstring(Console:Get())()
        end)
        HA:AddButton("Clear", function()
            Console:Set("")
        end)
        
    end
    Tab:Show()
    library:FormatWindows()
end
