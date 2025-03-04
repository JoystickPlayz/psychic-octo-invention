
--[[
	ui-engine-v2
	version 1.3a
	by Singularity (V3rm @ King Singularity) (Discord @ Singularity#5490)
--]]

local ui_options = {
	main_color = Color3.fromRGB(41, 74, 122),
	min_size = Vector2.new(400, 300),
	toggle_key = Enum.KeyCode.RightShift,
	can_resize = true,
}

do
	local imgui = game:GetService("CoreGui"):FindFirstChild("imgui")

	if imgui then imgui:Destroy() end
end

local imgui = Instance.new("ScreenGui")
local Prefabs = Instance.new("Frame")
local Label = Instance.new("TextLabel")
local Window = Instance.new("ImageLabel")
local Resizer = Instance.new("Frame")
local Bar = Instance.new("Frame")
local Toggle = Instance.new("ImageButton")
local Base = Instance.new("ImageLabel")
local Top = Instance.new("ImageLabel")
local Tabs = Instance.new("Frame")
local Title = Instance.new("TextLabel")
local TabSelection = Instance.new("ImageLabel")
local TabButtons = Instance.new("Frame")
local UIListLayout = Instance.new("UIListLayout")
local Frame = Instance.new("Frame")
local Tab = Instance.new("Frame")
local UIListLayout_2 = Instance.new("UIListLayout")
local TextBox = Instance.new("TextBox")
local TextBox_Roundify_4px = Instance.new("ImageLabel")
local Slider = Instance.new("ImageLabel")
local Title_2 = Instance.new("TextLabel")
local Indicator = Instance.new("ImageLabel")
local Value = Instance.new("TextLabel")
local TextLabel = Instance.new("TextLabel")
local TextLabel_2 = Instance.new("TextLabel")
local Circle = Instance.new("ImageLabel")
local UIListLayout_3 = Instance.new("UIListLayout")
local Dropdown = Instance.new("TextButton")
local Indicator_2 = Instance.new("ImageLabel")
local Box = Instance.new("ImageButton")
local Objects = Instance.new("ScrollingFrame")
local UIListLayout_4 = Instance.new("UIListLayout")
local TextButton_Roundify_4px = Instance.new("ImageLabel")
local TabButton = Instance.new("TextButton")
local TextButton_Roundify_4px_2 = Instance.new("ImageLabel")
local Folder = Instance.new("ImageLabel")
local Button = Instance.new("TextButton")
local TextButton_Roundify_4px_3 = Instance.new("ImageLabel")
local Toggle_2 = Instance.new("ImageLabel")
local Objects_2 = Instance.new("Frame")
local UIListLayout_5 = Instance.new("UIListLayout")
local HorizontalAlignment = Instance.new("Frame")
local UIListLayout_6 = Instance.new("UIListLayout")
local Console = Instance.new("ImageLabel")
local ScrollingFrame = Instance.new("ScrollingFrame")
local Source = Instance.new("TextBox")
local Comments = Instance.new("TextLabel")
local Globals = Instance.new("TextLabel")
local Keywords = Instance.new("TextLabel")
local RemoteHighlight = Instance.new("TextLabel")
local Strings = Instance.new("TextLabel")
local Tokens = Instance.new("TextLabel")
local Numbers = Instance.new("TextLabel")
local Info = Instance.new("TextLabel")
local Lines = Instance.new("TextLabel")
local ColorPicker = Instance.new("ImageLabel")
local Palette = Instance.new("ImageLabel")
local Indicator_3 = Instance.new("ImageLabel")
local Sample = Instance.new("ImageLabel")
local Saturation = Instance.new("ImageLabel")
local Indicator_4 = Instance.new("Frame")
local Switch = Instance.new("TextButton")
local TextButton_Roundify_4px_4 = Instance.new("ImageLabel")
local Title_3 = Instance.new("TextLabel")
local Button_2 = Instance.new("TextButton")
local TextButton_Roundify_4px_5 = Instance.new("ImageLabel")
local DropdownButton = Instance.new("TextButton")
local Keybind = Instance.new("ImageLabel")
local Title_4 = Instance.new("TextLabel")
local Input = Instance.new("TextButton")
local Input_Roundify_4px = Instance.new("ImageLabel")
local Windows = Instance.new("Frame")

imgui.Name = "imgui"
imgui.Parent = game:GetService("CoreGui")

Prefabs.Name = "Prefabs"
Prefabs.Parent = imgui
Prefabs.BackgroundColor3 = Color3.new(1, 1, 1)
Prefabs.Size = UDim2.new(0, 100, 0, 100)
Prefabs.Visible = false

Label.Name = "Label"
Label.Parent = Prefabs
Label.BackgroundColor3 = Color3.new(1, 1, 1)
Label.BackgroundTransparency = 1
Label.Size = UDim2.new(0, 200, 0, 20)
Label.Font = Enum.Font.GothamSemibold
Label.Text = "Hello, world 123"
Label.TextColor3 = Color3.new(1, 1, 1)
Label.TextSize = 14
Label.TextXAlignment = Enum.TextXAlignment.Left

Window.Name = "Window"
Window.Parent = Prefabs
Window.Active = true
Window.BackgroundColor3 = Color3.new(1, 1, 1)
Window.BackgroundTransparency = 1
Window.ClipsDescendants = true
Window.Position = UDim2.new(0, 20, 0, 20)
Window.Selectable = true
Window.Size = UDim2.new(0, 200, 0, 200)
Window.Image = "rbxassetid://2851926732"
Window.ImageColor3 = Color3.new(0.0823529, 0.0862745, 0.0901961)
Window.ScaleType = Enum.ScaleType.Slice
Window.SliceCenter = Rect.new(12, 12, 12, 12)

Resizer.Name = "Resizer"
Resizer.Parent = Window
Resizer.Active = true
Resizer.BackgroundColor3 = Color3.new(1, 1, 1)
Resizer.BackgroundTransparency = 1
Resizer.BorderSizePixel = 0
Resizer.Position = UDim2.new(1, -20, 1, -20)
Resizer.Size = UDim2.new(0, 20, 0, 20)

Bar.Name = "Bar"
Bar.Parent = Window
Bar.BackgroundColor3 = Color3.new(0.160784, 0.290196, 0.478431)
Bar.BorderSizePixel = 0
Bar.Position = UDim2.new(0, 0, 0, 5)
Bar.Size = UDim2.new(1, 0, 0, 15)

Toggle.Name = "Toggle"
Toggle.Parent = Bar
Toggle.BackgroundColor3 = Color3.new(1, 1, 1)
Toggle.BackgroundTransparency = 1
Toggle.Position = UDim2.new(0, 5, 0, -2)
Toggle.Rotation = 90
Toggle.Size = UDim2.new(0, 20, 0, 20)
Toggle.ZIndex = 2
Toggle.Image = "https://www.roblox.com/Thumbs/Asset.ashx?width=420&height=420&assetId=4731371541"

Base.Name = "Base"
Base.Parent = Bar
Base.BackgroundColor3 = Color3.new(0.160784, 0.290196, 0.478431)
Base.BorderSizePixel = 0
Base.Position = UDim2.new(0, 0, 0.800000012, 0)
Base.Size = UDim2.new(1, 0, 0, 10)
Base.Image = "rbxassetid://2851926732"
Base.ImageColor3 = Color3.new(0.160784, 0.290196, 0.478431)
Base.ScaleType = Enum.ScaleType.Slice
Base.SliceCenter = Rect.new(12, 12, 12, 12)

Top.Name = "Top"
Top.Parent = Bar
Top.BackgroundColor3 = Color3.new(1, 1, 1)
Top.BackgroundTransparency = 1
Top.Position = UDim2.new(0, 0, 0, -5)
Top.Size = UDim2.new(1, 0, 0, 10)
Top.Image = "rbxassetid://2851926732"
Top.ImageColor3 = Color3.new(0.160784, 0.290196, 0.478431)
Top.ScaleType = Enum.ScaleType.Slice
Top.SliceCenter = Rect.new(12, 12, 12, 12)

Tabs.Name = "Tabs"
Tabs.Parent = Window
Tabs.BackgroundColor3 = Color3.new(1, 1, 1)
Tabs.BackgroundTransparency = 1
Tabs.Position = UDim2.new(0, 15, 0, 60)
Tabs.Size = UDim2.new(1, -30, 1, -60)

Title.Name = "Title"
Title.Parent = Window
Title.BackgroundColor3 = Color3.new(1, 1, 1)
Title.BackgroundTransparency = 1
Title.Position = UDim2.new(0, 30, 0, 3)
Title.Size = UDim2.new(0, 200, 0, 20)
Title.Font = Enum.Font.GothamBold
Title.Text = "Gamer Time"
Title.TextColor3 = Color3.new(1, 1, 1)
Title.TextSize = 14
Title.TextXAlignment = Enum.TextXAlignment.Left

TabSelection.Name = "TabSelection"
TabSelection.Parent = Window
TabSelection.BackgroundColor3 = Color3.new(1, 1, 1)
TabSelection.BackgroundTransparency = 1
TabSelection.Position = UDim2.new(0, 15, 0, 30)
TabSelection.Size = UDim2.new(1, -30, 0, 25)
TabSelection.Visible = false
TabSelection.Image = "rbxassetid://2851929490"
TabSelection.ImageColor3 = Color3.new(0.145098, 0.14902, 0.156863)
TabSelection.ScaleType = Enum.ScaleType.Slice
TabSelection.SliceCenter = Rect.new(4, 4, 4, 4)

TabButtons.Name = "TabButtons"
TabButtons.Parent = TabSelection
TabButtons.BackgroundColor3 = Color3.new(1, 1, 1)
TabButtons.BackgroundTransparency = 1
TabButtons.Size = UDim2.new(1, 0, 1, 0)

UIListLayout.Parent = TabButtons
UIListLayout.FillDirection = Enum.FillDirection.Horizontal
UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
UIListLayout.Padding = UDim.new(0, 2)

Frame.Parent = TabSelection
Frame.BackgroundColor3 = Color3.new(0.12549, 0.227451, 0.372549)
Frame.BorderColor3 = Color3.new(0.105882, 0.164706, 0.207843)
Frame.BorderSizePixel = 0
Frame.Position = UDim2.new(0, 0, 1, 0)
Frame.Size = UDim2.new(1, 0, 0, 2)

Tab.Name = "Tab"
Tab.Parent = Prefabs
Tab.BackgroundColor3 = Color3.new(1, 1, 1)
Tab.BackgroundTransparency = 1
Tab.Size = UDim2.new(1, 0, 1, 0)
Tab.Visible = false

UIListLayout_2.Parent = Tab
UIListLayout_2.SortOrder = Enum.SortOrder.LayoutOrder
UIListLayout_2.Padding = UDim.new(0, 5)

TextBox.Parent = Prefabs
TextBox.BackgroundColor3 = Color3.new(1, 1, 1)
TextBox.BackgroundTransparency = 1
TextBox.BorderSizePixel = 0
TextBox.Size = UDim2.new(1, 0, 0, 20)
TextBox.ZIndex = 2
TextBox.Font = Enum.Font.GothamSemibold
TextBox.PlaceholderColor3 = Color3.new(0.698039, 0.698039, 0.698039)
TextBox.PlaceholderText = "Input Text"
TextBox.Text = ""
TextBox.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
TextBox.TextSize = 14

TextBox_Roundify_4px.Name = "TextBox_Roundify_4px"
TextBox_Roundify_4px.Parent = TextBox
TextBox_Roundify_4px.BackgroundColor3 = Color3.new(1, 1, 1)
TextBox_Roundify_4px.BackgroundTransparency = 1
TextBox_Roundify_4px.Size = UDim2.new(1, 0, 1, 0)
TextBox_Roundify_4px.Image = "rbxassetid://2851929490"
TextBox_Roundify_4px.ImageColor3 = Color3.new(0.203922, 0.207843, 0.219608)
TextBox_Roundify_4px.ScaleType = Enum.ScaleType.Slice
TextBox_Roundify_4px.SliceCenter = Rect.new(4, 4, 4, 4)

Slider.Name = "Slider"
Slider.Parent = Prefabs
Slider.BackgroundColor3 = Color3.new(1, 1, 1)
Slider.BackgroundTransparency = 1
Slider.Position = UDim2.new(0, 0, 0.178571433, 0)
Slider.Size = UDim2.new(1, 0, 0, 20)
Slider.Image = "rbxassetid://2851929490"
Slider.ImageColor3 = Color3.new(0.145098, 0.14902, 0.156863)
Slider.ScaleType = Enum.ScaleType.Slice
Slider.SliceCenter = Rect.new(4, 4, 4, 4)

Title_2.Name = "Title"
Title_2.Parent = Slider
Title_2.BackgroundColor3 = Color3.new(1, 1, 1)
Title_2.BackgroundTransparency = 1
Title_2.Position = UDim2.new(0.5, 0, 0.5, -10)
Title_2.Size = UDim2.new(0, 0, 0, 20)
Title_2.ZIndex = 2
Title_2.Font = Enum.Font.GothamBold
Title_2.Text = "Slider"
Title_2.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
Title_2.TextSize = 14

Indicator.Name = "Indicator"
Indicator.Parent = Slider
Indicator.BackgroundColor3 = Color3.new(1, 1, 1)
Indicator.BackgroundTransparency = 1
Indicator.Size = UDim2.new(0, 0, 0, 20)
Indicator.Image = "rbxassetid://2851929490"
Indicator.ImageColor3 = Color3.new(0.254902, 0.262745, 0.278431)
Indicator.ScaleType = Enum.ScaleType.Slice
Indicator.SliceCenter = Rect.new(4, 4, 4, 4)

Value.Name = "Value"
Value.Parent = Slider
Value.BackgroundColor3 = Color3.new(1, 1, 1)
Value.BackgroundTransparency = 1
Value.Position = UDim2.new(1, -55, 0.5, -10)
Value.Size = UDim2.new(0, 50, 0, 20)
Value.Font = Enum.Font.GothamBold
Value.Text = "0%"
Value.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
Value.TextSize = 14

TextLabel.Parent = Slider
TextLabel.BackgroundColor3 = Color3.new(1, 1, 1)
TextLabel.BackgroundTransparency = 1
TextLabel.Position = UDim2.new(1, -20, -0.75, 0)
TextLabel.Size = UDim2.new(0, 26, 0, 50)
TextLabel.Font = Enum.Font.GothamBold
TextLabel.Text = "]"
TextLabel.TextColor3 = Color3.new(0.627451, 0.627451, 0.627451)
TextLabel.TextSize = 14

TextLabel_2.Parent = Slider
TextLabel_2.BackgroundColor3 = Color3.new(1, 1, 1)
TextLabel_2.BackgroundTransparency = 1
TextLabel_2.Position = UDim2.new(1, -65, -0.75, 0)
TextLabel_2.Size = UDim2.new(0, 26, 0, 50)
TextLabel_2.Font = Enum.Font.GothamBold
TextLabel_2.Text = "["
TextLabel_2.TextColor3 = Color3.new(0.627451, 0.627451, 0.627451)
TextLabel_2.TextSize = 14

Circle.Name = "Circle"
Circle.Parent = Prefabs
Circle.BackgroundColor3 = Color3.new(1, 1, 1)
Circle.BackgroundTransparency = 1
Circle.Image = "rbxassetid://266543268"
Circle.ImageTransparency = 0.5

UIListLayout_3.Parent = Prefabs
UIListLayout_3.FillDirection = Enum.FillDirection.Horizontal
UIListLayout_3.SortOrder = Enum.SortOrder.LayoutOrder
UIListLayout_3.Padding = UDim.new(0, 20)

Dropdown.Name = "Dropdown"
Dropdown.Parent = Prefabs
Dropdown.BackgroundColor3 = Color3.new(1, 1, 1)
Dropdown.BackgroundTransparency = 1
Dropdown.BorderSizePixel = 0
Dropdown.Position = UDim2.new(-0.055555556, 0, 0.0833333284, 0)
Dropdown.Size = UDim2.new(0, 200, 0, 20)
Dropdown.ZIndex = 2
Dropdown.Font = Enum.Font.GothamBold
Dropdown.Text = "      Dropdown"
Dropdown.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
Dropdown.TextSize = 14
Dropdown.TextXAlignment = Enum.TextXAlignment.Left

Indicator_2.Name = "Indicator"
Indicator_2.Parent = Dropdown
Indicator_2.BackgroundColor3 = Color3.new(1, 1, 1)
Indicator_2.BackgroundTransparency = 1
Indicator_2.Position = UDim2.new(0.899999976, -10, 0.100000001, 0)
Indicator_2.Rotation = -90
Indicator_2.Size = UDim2.new(0, 15, 0, 15)
Indicator_2.ZIndex = 2
Indicator_2.Image = "https://www.roblox.com/Thumbs/Asset.ashx?width=420&height=420&assetId=4744658743"

Box.Name = "Box"
Box.Parent = Dropdown
Box.BackgroundColor3 = Color3.new(1, 1, 1)
Box.BackgroundTransparency = 1
Box.Position = UDim2.new(0, 0, 0, 25)
Box.Size = UDim2.new(1, 0, 0, 150)
Box.ZIndex = 3
Box.Image = "rbxassetid://2851929490"
Box.ImageColor3 = Color3.new(0.129412, 0.133333, 0.141176)
Box.ScaleType = Enum.ScaleType.Slice
Box.SliceCenter = Rect.new(4, 4, 4, 4)

Objects.Name = "Objects"
Objects.Parent = Box
Objects.BackgroundColor3 = Color3.new(1, 1, 1)
Objects.BackgroundTransparency = 1
Objects.BorderSizePixel = 0
Objects.Size = UDim2.new(1, 0, 1, 0)
Objects.ZIndex = 3
Objects.CanvasSize = UDim2.new(0, 0, 0, 0)
Objects.ScrollBarThickness = 8

UIListLayout_4.Parent = Objects
UIListLayout_4.SortOrder = Enum.SortOrder.LayoutOrder

TextButton_Roundify_4px.Name = "TextButton_Roundify_4px"
TextButton_Roundify_4px.Parent = Dropdown
TextButton_Roundify_4px.BackgroundColor3 = Color3.new(1, 1, 1)
TextButton_Roundify_4px.BackgroundTransparency = 1
TextButton_Roundify_4px.Size = UDim2.new(1, 0, 1, 0)
TextButton_Roundify_4px.Image = "rbxassetid://2851929490"
TextButton_Roundify_4px.ImageColor3 = Color3.new(0.203922, 0.207843, 0.219608)
TextButton_Roundify_4px.ScaleType = Enum.ScaleType.Slice
TextButton_Roundify_4px.SliceCenter = Rect.new(4, 4, 4, 4)

TabButton.Name = "TabButton"
TabButton.Parent = Prefabs
TabButton.BackgroundColor3 = Color3.new(0.160784, 0.290196, 0.478431)
TabButton.BackgroundTransparency = 1
TabButton.BorderSizePixel = 0
TabButton.Position = UDim2.new(0.185185179, 0, 0, 0)
TabButton.Size = UDim2.new(0, 71, 0, 20)
TabButton.ZIndex = 2
TabButton.Font = Enum.Font.GothamSemibold
TabButton.Text = "Test tab"
TabButton.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
TabButton.TextSize = 14

TextButton_Roundify_4px_2.Name = "TextButton_Roundify_4px"
TextButton_Roundify_4px_2.Parent = TabButton
TextButton_Roundify_4px_2.BackgroundColor3 = Color3.new(1, 1, 1)
TextButton_Roundify_4px_2.BackgroundTransparency = 1
TextButton_Roundify_4px_2.Size = UDim2.new(1, 0, 1, 0)
TextButton_Roundify_4px_2.Image = "rbxassetid://2851929490"
TextButton_Roundify_4px_2.ImageColor3 = Color3.new(0.203922, 0.207843, 0.219608)
TextButton_Roundify_4px_2.ScaleType = Enum.ScaleType.Slice
TextButton_Roundify_4px_2.SliceCenter = Rect.new(4, 4, 4, 4)

Folder.Name = "Folder"
Folder.Parent = Prefabs
Folder.BackgroundColor3 = Color3.new(1, 1, 1)
Folder.BackgroundTransparency = 1
Folder.Position = UDim2.new(0, 0, 0, 50)
Folder.Size = UDim2.new(1, 0, 0, 20)
Folder.Image = "rbxassetid://2851929490"
Folder.ImageColor3 = Color3.new(0.0823529, 0.0862745, 0.0901961)
Folder.ScaleType = Enum.ScaleType.Slice
Folder.SliceCenter = Rect.new(4, 4, 4, 4)

Button.Name = "Button"
Button.Parent = Folder
Button.BackgroundColor3 = Color3.new(0.160784, 0.290196, 0.478431)
Button.BackgroundTransparency = 1
Button.BorderSizePixel = 0
Button.Size = UDim2.new(1, 0, 0, 20)
Button.ZIndex = 2
Button.Font = Enum.Font.GothamSemibold
Button.Text = "      Folder"
Button.TextColor3 = Color3.new(1, 1, 1)
Button.TextSize = 14
Button.TextXAlignment = Enum.TextXAlignment.Left

TextButton_Roundify_4px_3.Name = "TextButton_Roundify_4px"
TextButton_Roundify_4px_3.Parent = Button
TextButton_Roundify_4px_3.BackgroundColor3 = Color3.new(1, 1, 1)
TextButton_Roundify_4px_3.BackgroundTransparency = 1
TextButton_Roundify_4px_3.Size = UDim2.new(1, 0, 1, 0)
TextButton_Roundify_4px_3.Image = "rbxassetid://2851929490"
TextButton_Roundify_4px_3.ImageColor3 = Color3.new(0.160784, 0.290196, 0.478431)
TextButton_Roundify_4px_3.ScaleType = Enum.ScaleType.Slice
TextButton_Roundify_4px_3.SliceCenter = Rect.new(4, 4, 4, 4)

Toggle_2.Name = "Toggle"
Toggle_2.Parent = Button
Toggle_2.BackgroundColor3 = Color3.new(1, 1, 1)
Toggle_2.BackgroundTransparency = 1
Toggle_2.Position = UDim2.new(0, 5, 0, 0)
Toggle_2.Size = UDim2.new(0, 20, 0, 20)
Toggle_2.Image = "https://www.roblox.com/Thumbs/Asset.ashx?width=420&height=420&assetId=4731371541"

Objects_2.Name = "Objects"
Objects_2.Parent = Folder
Objects_2.BackgroundColor3 = Color3.new(1, 1, 1)
Objects_2.BackgroundTransparency = 1
Objects_2.Position = UDim2.new(0, 10, 0, 25)
Objects_2.Size = UDim2.new(1, -10, 1, -25)
Objects_2.Visible = false

UIListLayout_5.Parent = Objects_2
UIListLayout_5.SortOrder = Enum.SortOrder.LayoutOrder
UIListLayout_5.Padding = UDim.new(0, 5)

HorizontalAlignment.Name = "HorizontalAlignment"
HorizontalAlignment.Parent = Prefabs
HorizontalAlignment.BackgroundColor3 = Color3.new(1, 1, 1)
HorizontalAlignment.BackgroundTransparency = 1
HorizontalAlignment.Size = UDim2.new(1, 0, 0, 20)

UIListLayout_6.Parent = HorizontalAlignment
UIListLayout_6.FillDirection = Enum.FillDirection.Horizontal
UIListLayout_6.SortOrder = Enum.SortOrder.LayoutOrder
UIListLayout_6.Padding = UDim.new(0, 5)

Console.Name = "Console"
Console.Parent = Prefabs
Console.BackgroundColor3 = Color3.new(1, 1, 1)
Console.BackgroundTransparency = 1
Console.Size = UDim2.new(1, 0, 0, 200)
Console.Image = "rbxassetid://2851928141"
Console.ImageColor3 = Color3.new(0.129412, 0.133333, 0.141176)
Console.ScaleType = Enum.ScaleType.Slice
Console.SliceCenter = Rect.new(8, 8, 8, 8)

ScrollingFrame.Parent = Console
ScrollingFrame.BackgroundColor3 = Color3.new(1, 1, 1)
ScrollingFrame.BackgroundTransparency = 1
ScrollingFrame.BorderSizePixel = 0
ScrollingFrame.Size = UDim2.new(1, 0, 1, 1)
ScrollingFrame.CanvasSize = UDim2.new(0, 0, 0, 0)
ScrollingFrame.ScrollBarThickness = 4

Source.Name = "Source"
Source.Parent = ScrollingFrame
Source.BackgroundColor3 = Color3.new(1, 1, 1)
Source.BackgroundTransparency = 1
Source.Position = UDim2.new(0, 40, 0, 0)
Source.Size = UDim2.new(1, -40, 0, 10000)
Source.ZIndex = 3
Source.ClearTextOnFocus = false
Source.Font = Enum.Font.Code
Source.MultiLine = true
Source.PlaceholderColor3 = Color3.new(0.8, 0.8, 0.8)
Source.Text = ""
Source.TextColor3 = Color3.new(1, 1, 1)
Source.TextSize = 15
Source.TextStrokeColor3 = Color3.new(1, 1, 1)
Source.TextWrapped = true
Source.TextXAlignment = Enum.TextXAlignment.Left
Source.TextYAlignment = Enum.TextYAlignment.Top

Comments.Name = "Comments"
Comments.Parent = Source
Comments.BackgroundColor3 = Color3.new(1, 1, 1)
Comments.BackgroundTransparency = 1
Comments.Size = UDim2.new(1, 0, 1, 0)
Comments.ZIndex = 5
Comments.Font = Enum.Font.Code
Comments.Text = ""
Comments.TextColor3 = Color3.new(0.231373, 0.784314, 0.231373)
Comments.TextSize = 15
Comments.TextXAlignment = Enum.TextXAlignment.Left
Comments.TextYAlignment = Enum.TextYAlignment.Top

Globals.Name = "Globals"
Globals.Parent = Source
Globals.BackgroundColor3 = Color3.new(1, 1, 1)
Globals.BackgroundTransparency = 1
Globals.Size = UDim2.new(1, 0, 1, 0)
Globals.ZIndex = 5
Globals.Font = Enum.Font.Code
Globals.Text = ""
Globals.TextColor3 = Color3.new(0.517647, 0.839216, 0.968628)
Globals.TextSize = 15
Globals.TextXAlignment = Enum.TextXAlignment.Left
Globals.TextYAlignment = Enum.TextYAlignment.Top

Keywords.Name = "Keywords"
Keywords.Parent = Source
Keywords.BackgroundColor3 = Color3.new(1, 1, 1)
Keywords.BackgroundTransparency = 1
Keywords.Size = UDim2.new(1, 0, 1, 0)
Keywords.ZIndex = 5
Keywords.Font = Enum.Font.Code
Keywords.Text = ""
Keywords.TextColor3 = Color3.new(0.972549, 0.427451, 0.486275)
Keywords.TextSize = 15
Keywords.TextXAlignment = Enum.TextXAlignment.Left
Keywords.TextYAlignment = Enum.TextYAlignment.Top

RemoteHighlight.Name = "RemoteHighlight"
RemoteHighlight.Parent = Source
RemoteHighlight.BackgroundColor3 = Color3.new(1, 1, 1)
RemoteHighlight.BackgroundTransparency = 1
RemoteHighlight.Size = UDim2.new(1, 0, 1, 0)
RemoteHighlight.ZIndex = 5
RemoteHighlight.Font = Enum.Font.Code
RemoteHighlight.Text = ""
RemoteHighlight.TextColor3 = Color3.new(0, 0.568627, 1)
RemoteHighlight.TextSize = 15
RemoteHighlight.TextXAlignment = Enum.TextXAlignment.Left
RemoteHighlight.TextYAlignment = Enum.TextYAlignment.Top

Strings.Name = "Strings"
Strings.Parent = Source
Strings.BackgroundColor3 = Color3.new(1, 1, 1)
Strings.BackgroundTransparency = 1
Strings.Size = UDim2.new(1, 0, 1, 0)
Strings.ZIndex = 5
Strings.Font = Enum.Font.Code
Strings.Text = ""
Strings.TextColor3 = Color3.new(0.678431, 0.945098, 0.584314)
Strings.TextSize = 15
Strings.TextXAlignment = Enum.TextXAlignment.Left
Strings.TextYAlignment = Enum.TextYAlignment.Top

Tokens.Name = "Tokens"
Tokens.Parent = Source
Tokens.BackgroundColor3 = Color3.new(1, 1, 1)
Tokens.BackgroundTransparency = 1
Tokens.Size = UDim2.new(1, 0, 1, 0)
Tokens.ZIndex = 5
Tokens.Font = Enum.Font.Code
Tokens.Text = ""
Tokens.TextColor3 = Color3.new(1, 1, 1)
Tokens.TextSize = 15
Tokens.TextXAlignment = Enum.TextXAlignment.Left
Tokens.TextYAlignment = Enum.TextYAlignment.Top

Numbers.Name = "Numbers"
Numbers.Parent = Source
Numbers.BackgroundColor3 = Color3.new(1, 1, 1)
Numbers.BackgroundTransparency = 1
Numbers.Size = UDim2.new(1, 0, 1, 0)
Numbers.ZIndex = 4
Numbers.Font = Enum.Font.Code
Numbers.Text = ""
Numbers.TextColor3 = Color3.new(1, 0.776471, 0)
Numbers.TextSize = 15
Numbers.TextXAlignment = Enum.TextXAlignment.Left
Numbers.TextYAlignment = Enum.TextYAlignment.Top

Info.Name = "Info"
Info.Parent = Source
Info.BackgroundColor3 = Color3.new(1, 1, 1)
Info.BackgroundTransparency = 1
Info.Size = UDim2.new(1, 0, 1, 0)
Info.ZIndex = 5
Info.Font = Enum.Font.Code
Info.Text = ""
Info.TextColor3 = Color3.new(0, 0.635294, 1)
Info.TextSize = 15
Info.TextXAlignment = Enum.TextXAlignment.Left
Info.TextYAlignment = Enum.TextYAlignment.Top

Lines.Name = "Lines"
Lines.Parent = ScrollingFrame
Lines.BackgroundColor3 = Color3.new(1, 1, 1)
Lines.BackgroundTransparency = 1
Lines.BorderSizePixel = 0
Lines.Size = UDim2.new(0, 40, 0, 10000)
Lines.ZIndex = 4
Lines.Font = Enum.Font.Code
Lines.Text = "1\n"
Lines.TextColor3 = Color3.new(1, 1, 1)
Lines.TextSize = 15
Lines.TextWrapped = true
Lines.TextYAlignment = Enum.TextYAlignment.Top

ColorPicker.Name = "ColorPicker"
ColorPicker.Parent = Prefabs
ColorPicker.BackgroundColor3 = Color3.new(1, 1, 1)
ColorPicker.BackgroundTransparency = 1
ColorPicker.Size = UDim2.new(0, 180, 0, 110)
ColorPicker.Image = "rbxassetid://2851929490"
ColorPicker.ImageColor3 = Color3.new(0.203922, 0.207843, 0.219608)
ColorPicker.ScaleType = Enum.ScaleType.Slice
ColorPicker.SliceCenter = Rect.new(4, 4, 4, 4)

Palette.Name = "Palette"
Palette.Parent = ColorPicker
Palette.BackgroundColor3 = Color3.new(1, 1, 1)
Palette.BackgroundTransparency = 1
Palette.Position = UDim2.new(0.0500000007, 0, 0.0500000007, 0)
Palette.Size = UDim2.new(0, 100, 0, 100)
Palette.Image = "rbxassetid://698052001"
Palette.ScaleType = Enum.ScaleType.Slice
Palette.SliceCenter = Rect.new(4, 4, 4, 4)

Indicator_3.Name = "Indicator"
Indicator_3.Parent = Palette
Indicator_3.BackgroundColor3 = Color3.new(1, 1, 1)
Indicator_3.BackgroundTransparency = 1
Indicator_3.Size = UDim2.new(0, 5, 0, 5)
Indicator_3.ZIndex = 2
Indicator_3.Image = "rbxassetid://2851926732"
Indicator_3.ImageColor3 = Color3.new(0, 0, 0)
Indicator_3.ScaleType = Enum.ScaleType.Slice
Indicator_3.SliceCenter = Rect.new(12, 12, 12, 12)

Sample.Name = "Sample"
Sample.Parent = ColorPicker
Sample.BackgroundColor3 = Color3.new(1, 1, 1)
Sample.BackgroundTransparency = 1
Sample.Position = UDim2.new(0.800000012, 0, 0.0500000007, 0)
Sample.Size = UDim2.new(0, 25, 0, 25)
Sample.Image = "rbxassetid://2851929490"
Sample.ScaleType = Enum.ScaleType.Slice
Sample.SliceCenter = Rect.new(4, 4, 4, 4)

Saturation.Name = "Saturation"
Saturation.Parent = ColorPicker
Saturation.BackgroundColor3 = Color3.new(1, 1, 1)
Saturation.Position = UDim2.new(0.649999976, 0, 0.0500000007, 0)
Saturation.Size = UDim2.new(0, 15, 0, 100)
Saturation.Image = "rbxassetid://3641079629"

Indicator_4.Name = "Indicator"
Indicator_4.Parent = Saturation
Indicator_4.BackgroundColor3 = Color3.new(1, 1, 1)
Indicator_4.BorderSizePixel = 0
Indicator_4.Size = UDim2.new(0, 20, 0, 2)
Indicator_4.ZIndex = 2

Switch.Name = "Switch"
Switch.Parent = Prefabs
Switch.BackgroundColor3 = Color3.new(1, 1, 1)
Switch.BackgroundTransparency = 1
Switch.BorderSizePixel = 0
Switch.Position = UDim2.new(0.229411766, 0, 0.20714286, 0)
Switch.Size = UDim2.new(0, 20, 0, 20)
Switch.ZIndex = 2
Switch.Font = Enum.Font.SourceSans
Switch.Text = ""
Switch.TextColor3 = Color3.new(1, 1, 1)
Switch.TextSize = 18

TextButton_Roundify_4px_4.Name = "TextButton_Roundify_4px"
TextButton_Roundify_4px_4.Parent = Switch
TextButton_Roundify_4px_4.BackgroundColor3 = Color3.new(1, 1, 1)
TextButton_Roundify_4px_4.BackgroundTransparency = 1
TextButton_Roundify_4px_4.Size = UDim2.new(1, 0, 1, 0)
TextButton_Roundify_4px_4.Image = "rbxassetid://2851929490"
TextButton_Roundify_4px_4.ImageColor3 = Color3.new(0.160784, 0.290196, 0.478431)
TextButton_Roundify_4px_4.ImageTransparency = 0.5
TextButton_Roundify_4px_4.ScaleType = Enum.ScaleType.Slice
TextButton_Roundify_4px_4.SliceCenter = Rect.new(4, 4, 4, 4)

Title_3.Name = "Title"
Title_3.Parent = Switch
Title_3.BackgroundColor3 = Color3.new(1, 1, 1)
Title_3.BackgroundTransparency = 1
Title_3.Position = UDim2.new(1.20000005, 0, 0, 0)
Title_3.Size = UDim2.new(0, 20, 0, 20)
Title_3.Font = Enum.Font.GothamSemibold
Title_3.Text = "Switch"
Title_3.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
Title_3.TextSize = 14
Title_3.TextXAlignment = Enum.TextXAlignment.Left

Button_2.Name = "Button"
Button_2.Parent = Prefabs
Button_2.BackgroundColor3 = Color3.new(0.160784, 0.290196, 0.478431)
Button_2.BackgroundTransparency = 1
Button_2.BorderSizePixel = 0
Button_2.Size = UDim2.new(0, 91, 0, 20)
Button_2.ZIndex = 2
Button_2.Font = Enum.Font.GothamSemibold
Button_2.TextColor3 = Color3.new(1, 1, 1)
Button_2.TextSize = 14

TextButton_Roundify_4px_5.Name = "TextButton_Roundify_4px"
TextButton_Roundify_4px_5.Parent = Button_2
TextButton_Roundify_4px_5.BackgroundColor3 = Color3.new(1, 1, 1)
TextButton_Roundify_4px_5.BackgroundTransparency = 1
TextButton_Roundify_4px_5.Size = UDim2.new(1, 0, 1, 0)
TextButton_Roundify_4px_5.Image = "rbxassetid://2851929490"
TextButton_Roundify_4px_5.ImageColor3 = Color3.new(0.160784, 0.290196, 0.478431)
TextButton_Roundify_4px_5.ScaleType = Enum.ScaleType.Slice
TextButton_Roundify_4px_5.SliceCenter = Rect.new(4, 4, 4, 4)

DropdownButton.Name = "DropdownButton"
DropdownButton.Parent = Prefabs
DropdownButton.BackgroundColor3 = Color3.new(0.129412, 0.133333, 0.141176)
DropdownButton.BorderSizePixel = 0
DropdownButton.Size = UDim2.new(1, 0, 0, 20)
DropdownButton.ZIndex = 3
DropdownButton.Font = Enum.Font.GothamBold
DropdownButton.Text = "      Button"
DropdownButton.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
DropdownButton.TextSize = 14
DropdownButton.TextXAlignment = Enum.TextXAlignment.Left

Keybind.Name = "Keybind"
Keybind.Parent = Prefabs
Keybind.BackgroundColor3 = Color3.new(1, 1, 1)
Keybind.BackgroundTransparency = 1
Keybind.Size = UDim2.new(0, 200, 0, 20)
Keybind.Image = "rbxassetid://2851929490"
Keybind.ImageColor3 = Color3.new(0.203922, 0.207843, 0.219608)
Keybind.ScaleType = Enum.ScaleType.Slice
Keybind.SliceCenter = Rect.new(4, 4, 4, 4)

Title_4.Name = "Title"
Title_4.Parent = Keybind
Title_4.BackgroundColor3 = Color3.new(1, 1, 1)
Title_4.BackgroundTransparency = 1
Title_4.Size = UDim2.new(0, 0, 1, 0)
Title_4.Font = Enum.Font.GothamBold
Title_4.Text = "Keybind"
Title_4.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
Title_4.TextSize = 14
Title_4.TextXAlignment = Enum.TextXAlignment.Left

Input.Name = "Input"
Input.Parent = Keybind
Input.BackgroundColor3 = Color3.new(1, 1, 1)
Input.BackgroundTransparency = 1
Input.BorderSizePixel = 0
Input.Position = UDim2.new(1, -85, 0, 2)
Input.Size = UDim2.new(0, 80, 1, -4)
Input.ZIndex = 2
Input.Font = Enum.Font.GothamSemibold
Input.Text = "RShift"
Input.TextColor3 = Color3.new(0.784314, 0.784314, 0.784314)
Input.TextSize = 12
Input.TextWrapped = true

Input_Roundify_4px.Name = "Input_Roundify_4px"
Input_Roundify_4px.Parent = Input
Input_Roundify_4px.BackgroundColor3 = Color3.new(1, 1, 1)
Input_Roundify_4px.BackgroundTransparency = 1
Input_Roundify_4px.Size = UDim2.new(1, 0, 1, 0)
Input_Roundify_4px.Image = "rbxassetid://2851929490"
Input_Roundify_4px.ImageColor3 = Color3.new(0.290196, 0.294118, 0.313726)
Input_Roundify_4px.ScaleType = Enum.ScaleType.Slice
Input_Roundify_4px.SliceCenter = Rect.new(4, 4, 4, 4)

Windows.Name = "Windows"
Windows.Parent = imgui
Windows.BackgroundColor3 = Color3.new(1, 1, 1)
Windows.BackgroundTransparency = 1
Windows.Position = UDim2.new(0, 20, 0, 20)
Windows.Size = UDim2.new(1, 20, 1, -20)

--[[ Script ]]--
script.Parent = imgui

local UIS = game:GetService("UserInputService")
local TweenService = game:GetService("TweenService")
local RS = game:GetService("RunService")
local ps = game:GetService("Players")

local p = ps.LocalPlayer
local mouse = p:GetMouse()

local Prefabs = script.Parent:WaitForChild("Prefabs")
local Windows = script.Parent:FindFirstChild("Windows")

local checks = {
	["binding"] = false,
}

UIS.InputBegan:Connect(function(input, gameProcessed)
	if input.KeyCode == ((typeof(ui_options.toggle_key) == "EnumItem") and ui_options.toggle_key or Enum.KeyCode.RightShift) then
		if script.Parent then
			if not checks.binding then
				script.Parent.Enabled = not script.Parent.Enabled
			end
		end
	end
end)

local function Resize(part, new, _delay)
	_delay = _delay or 0.5
	local tweenInfo = TweenInfo.new(_delay, Enum.EasingStyle.Quad, Enum.EasingDirection.Out)
	local tween = TweenService:Create(part, tweenInfo, new)
	tween:Play()
end

local function rgbtohsv(r, g, b) -- idk who made this function, but thanks
	r, g, b = r / 255, g / 255, b / 255
	local max, min = math.max(r, g, b), math.min(r, g, b)
	local h, s, v
	v = max

	local d = max - min
	if max == 0 then
		s = 0
	else
		s = d / max
	end

	if max == min then
		h = 0
	else
		if max == r then
			h = (g - b) / d
			if g < b then
				h = h + 6
			end
		elseif max == g then
			h = (b - r) / d + 2
		elseif max == b then
			h = (r - g) / d + 4
		end
		h = h / 6
	end

	return h, s, v
end

local function hasprop(object, prop)
	local a, b = pcall(function()
		return object[tostring(prop)]
	end)
	if a then
		return b
	end
end

local function gNameLen(obj)
	return obj.TextBounds.X + 15
end

local function gMouse()
	return Vector2.new(UIS:GetMouseLocation().X + 1, UIS:GetMouseLocation().Y - 35)
end

local function ripple(button, x, y)
	spawn(function()
		button.ClipsDescendants = true

		local circle = Prefabs:FindFirstChild("Circle"):Clone()

		circle.Parent = button
		circle.ZIndex = 1000

		local new_x = x - circle.AbsolutePosition.X
		local new_y = y - circle.AbsolutePosition.Y
		circle.Position = UDim2.new(0, new_x, 0, new_y)

		local size = 0
		if button.AbsoluteSize.X > button.AbsoluteSize.Y then
			 size = button.AbsoluteSize.X * 1.5
		elseif button.AbsoluteSize.X < button.AbsoluteSize.Y then
			 size = button.AbsoluteSize.Y * 1.5
		elseif button.AbsoluteSize.X == button.AbsoluteSize.Y then
			size = button.AbsoluteSize.X * 1.5
		end

		circle:TweenSizeAndPosition(UDim2.new(0, size, 0, size), UDim2.new(0.5, -size / 2, 0.5, -size / 2), "Out", "Quad", 0.5, false, nil)
		Resize(circle, {ImageTransparency = 1}, 0.5)

		wait(0.5)
		circle:Destroy()
	end)
end

local windows = 0
local library = {}

local function format_windows()
	local ull = Prefabs:FindFirstChild("UIListLayout"):Clone()
	ull.Parent = Windows
	local data = {}

	for i,v in next, Windows:GetChildren() do
		if not (v:IsA("UIListLayout")) then
			data[v] = v.AbsolutePosition
		end
	end

	ull:Destroy()

	for i,v in next, data do
		i.Position = UDim2.new(0, v.X, 0, v.Y)
	end
end

function library:FormatWindows()
	format_windows()
end

function library:AddWindow(title, options)
	windows = windows + 1
	local dropdown_open = false
	title = tostring(title or "New Window")
	options = (typeof(options) == "table") and options or ui_options
	options.tween_time = 0.1

	local Window = Prefabs:FindFirstChild("Window"):Clone()
	Window.Parent = Windows
	Window:FindFirstChild("Title").Text = title
	Window.Size = UDim2.new(0, options.min_size.X, 0, options.min_size.Y)
	Window.ZIndex = Window.ZIndex + (windows * 10)

	do -- Altering Window Color
		local Title = Window:FindFirstChild("Title")
		local Bar = Window:FindFirstChild("Bar")
		local Base = Bar:FindFirstChild("Base")
		local Top = Bar:FindFirstChild("Top")
		local SplitFrame = Window:FindFirstChild("TabSelection"):FindFirstChild("Frame")
		local Toggle = Bar:FindFirstChild("Toggle")

		spawn(function()
			while true do
				Bar.BackgroundColor3 = options.main_color
				Base.BackgroundColor3 = options.main_color
				Base.ImageColor3 = options.main_color
				Top.ImageColor3 = options.main_color
				SplitFrame.BackgroundColor3 = options.main_color

				RS.Heartbeat:Wait()
			end
		end)

	end

	local Resizer = Window:WaitForChild("Resizer")

	local window_data = {}
	Window.Draggable = true

	do -- Resize Window
		local oldIcon = mouse.Icon
		local Entered = false
		Resizer.MouseEnter:Connect(function()
			Window.Draggable = false
			if options.can_resize then
				oldIcon = mouse.Icon
				-- mouse.Icon = "http://www.roblox.com/asset?id=4745131330"
			end
			Entered = true
		end)

		Resizer.MouseLeave:Connect(function()
			Entered = false
			if options.can_resize then
				mouse.Icon = oldIcon
			end
			Window.Draggable = true
		end)

		local Held = false
		UIS.InputBegan:Connect(function(inputObject)
			if inputObject.UserInputType == Enum.UserInputType.MouseButton1 then
				Held = true

				spawn(function() -- Loop check
					if Entered and Resizer.Active and options.can_resize then
						while Held and Resizer.Active do

							local mouse_location = gMouse()
							local x = mouse_location.X - Window.AbsolutePosition.X
							local y = mouse_location.Y - Window.AbsolutePosition.Y

							--
							if x >= options.min_size.X and y >= options.min_size.Y then
								Resize(Window, {Size = UDim2.new(0, x, 0, y)}, options.tween_time)
							elseif x >= options.min_size.X then
								Resize(Window, {Size = UDim2.new(0, x, 0, options.min_size.Y)}, options.tween_time)
							elseif y >= options.min_size.Y then
								Resize(Window, {Size = UDim2.new(0, options.min_size.X, 0, y)}, options.tween_time)
							else
								Resize(Window, {Size = UDim2.new(0, options.min_size.X, 0, options.min_size.Y)}, options.tween_time)
							end

							RS.Heartbeat:Wait()
						end
					end
				end)
			end
		end)
		UIS.InputEnded:Connect(function(inputObject)
			if inputObject.UserInputType == Enum.UserInputType.MouseButton1 then
				Held = false
			end
		end)
	end

	do -- [Open / Close] Window
		local open_close = Window:FindFirstChild("Bar"):FindFirstChild("Toggle")
		local open = true
		local canopen = true

		local oldwindowdata = {}
		local oldy = Window.AbsoluteSize.Y
		open_close.MouseButton1Click:Connect(function()
			if canopen then
				canopen = false

				if open then
					-- Close

					oldwindowdata = {}
					for i,v in next, Window:FindFirstChild("Tabs"):GetChildren() do
						oldwindowdata[v] = v.Visible
						v.Visible = false
					end

					Resizer.Active = false

					oldy = Window.AbsoluteSize.Y
					Resize(open_close, {Rotation = 0}, options.tween_time)
					Resize(Window, {Size = UDim2.new(0, Window.AbsoluteSize.X, 0, 26)}, options.tween_time)
					open_close.Parent:FindFirstChild("Base").Transparency = 1

				else
					-- Open

					for i,v in next, oldwindowdata do
						i.Visible = v
					end

					Resizer.Active = true

					Resize(open_close, {Rotation = 90}, options.tween_time)
					Resize(Window, {Size = UDim2.new(0, Window.AbsoluteSize.X, 0, oldy)}, options.tween_time)
					open_close.Parent:FindFirstChild("Base").Transparency = 0

				end

				open = not open
				wait(options.tween_time)
				canopen = true

			end
		end)
	end

	do -- UI Elements
		local tabs = Window:FindFirstChild("Tabs")
		local tab_selection = Window:FindFirstChild("TabSelection")
		local tab_buttons = tab_selection:FindFirstChild("TabButtons")

		do -- Add Tab
			function window_data:AddTab(tab_name)
				local tab_data = {}
				tab_name = tostring(tab_name or "New Tab")
				tab_selection.Visible = true

				local new_button = Prefabs:FindFirstChild("TabButton"):Clone()
				new_button.Parent = tab_buttons
				new_button.Text = tab_name
				new_button.Size = UDim2.new(0, gNameLen(new_button), 0, 20)
				new_button.ZIndex = new_button.ZIndex + (windows * 10)
				new_button:GetChildren()[1].ZIndex = new_button:GetChildren()[1].ZIndex + (windows * 10)

				local new_tab = Prefabs:FindFirstChild("Tab"):Clone()
				new_tab.Parent = tabs
				new_tab.ZIndex = new_tab.ZIndex + (windows * 10)

				local function show()
					if dropdown_open then return end
					for i, v in next, tab_buttons:GetChildren() do
						if not (v:IsA("UIListLayout")) then
							v:GetChildren()[1].ImageColor3 = Color3.fromRGB(52, 53, 56)
							Resize(v, {Size = UDim2.new(0, v.AbsoluteSize.X, 0, 20)}, options.tween_time)
						end
					end
					for i, v in next, tabs:GetChildren() do
						v.Visible = false
					end

					Resize(new_button, {Size = UDim2.new(0, new_button.AbsoluteSize.X, 0, 25)}, options.tween_time)
					new_button:GetChildren()[1].ImageColor3 = Color3.fromRGB(73, 75, 79)
					new_tab.Visible = true
				end

				new_button.MouseButton1Click:Connect(function()
					show()
				end)

				function tab_data:Show()
					show()
				end

				do -- Tab Elements

					function tab_data:AddLabel(label_text) -- [Label]
						label_text = tostring(label_text or "New Label")

						local label = Prefabs:FindFirstChild("Label"):Clone()

						label.Parent = new_tab
						label.Text = label_text
						label.Size = UDim2.new(0, gNameLen(label), 0, 20)
						label.ZIndex = label.ZIndex + (windows * 10)

						return label
					end

					function tab_data:AddButton(button_text, callback) -- [Button]
						button_text = tostring(button_text or "New Button")
						callback = typeof(callback) == "function" and callback or function()end

						local button = Prefabs:FindFirstChild("Button"):Clone()

						button.Parent = new_tab
						button.Text = button_text
						button.Size = UDim2.new(0, gNameLen(button), 0, 20)
						button.ZIndex = button.ZIndex + (windows * 10)
						button:GetChildren()[1].ZIndex = button:GetChildren()[1].ZIndex + (windows * 10)

						spawn(function()
							while true do
								if button and button:GetChildren()[1] then
									button:GetChildren()[1].ImageColor3 = options.main_color
								end
								RS.Heartbeat:Wait()
							end
						end)

						button.MouseButton1Click:Connect(function()
							ripple(button, mouse.X, mouse.Y)
							pcall(callback)
						end)

						return button
					end

					function tab_data:AddSwitch(switch_text, callback) -- [Switch]
						local switch_data = {}

						switch_text = tostring(switch_text or "New Switch")
						callback = typeof(callback) == "function" and callback or function()end

						local switch = Prefabs:FindFirstChild("Switch"):Clone()

						switch.Parent = new_tab
						switch:FindFirstChild("Title").Text = switch_text

						switch:FindFirstChild("Title").ZIndex = switch:FindFirstChild("Title").ZIndex + (windows * 10)
						switch.ZIndex = switch.ZIndex + (windows * 10)
						switch:GetChildren()[1].ZIndex = switch:GetChildren()[1].ZIndex + (windows * 10)

						spawn(function()
							while true do
								if switch and switch:GetChildren()[1] then
									switch:GetChildren()[1].ImageColor3 = options.main_color
								end
								RS.Heartbeat:Wait()
							end
						end)

						local toggled = false
						switch.MouseButton1Click:Connect(function()
							toggled = not toggled
							switch.Text = toggled and utf8.char(10003) or ""
							pcall(callback, toggled)
						end)

						function switch_data:Set(bool)
							toggled = (typeof(bool) == "boolean") and bool or false
							switch.Text = toggled and utf8.char(10003) or ""
							pcall(callback,toggled)
						end

						return switch_data, switch
					end

					function tab_data:AddTextBox(textbox_text, callback, textbox_options)
						textbox_text = tostring(textbox_text or "New TextBox")
						callback = typeof(callback) == "function" and callback or function()end
						textbox_options = typeof(textbox_options) == "table" and textbox_options or {["clear"] = true}
						textbox_options = {
							["clear"] = ((textbox_options.clear) == true)
						}

						local textbox = Prefabs:FindFirstChild("TextBox"):Clone()

						textbox.Parent = new_tab
						textbox.PlaceholderText = textbox_text
						textbox.ZIndex = textbox.ZIndex + (windows * 10)
						textbox:GetChildren()[1].ZIndex = textbox:GetChildren()[1].ZIndex + (windows * 10)

						textbox.FocusLost:Connect(function(ep)
							if ep then
								if #textbox.Text > 0 then
									pcall(callback, textbox.Text)
									if textbox_options.clear then
										textbox.Text = ""
									end
								end
							end
						end)

						return textbox
					end

					function tab_data:AddSlider(slider_text, callback, slider_options)
						local slider_data = {}

						slider_text = tostring(slider_text or "New Slider")
						callback = typeof(callback) == "function" and callback or function()end
						slider_options = typeof(slider_options) == "table" and slider_options or {}
						slider_options = {
							["min"] = slider_options.min or 0,
							["max"] = slider_options.max or 100,
							["readonly"] = slider_options.readonly or false,
						}

						local slider = Prefabs:FindFirstChild("Slider"):Clone()

						slider.Parent = new_tab
						slider.ZIndex = slider.ZIndex + (windows * 10)

						local title = slider:FindFirstChild("Title")
						local indicator = slider:FindFirstChild("Indicator")
						local value = slider:FindFirstChild("Value")
						title.ZIndex = title.ZIndex + (windows * 10)
						indicator.ZIndex = indicator.ZIndex + (windows * 10)
						value.ZIndex = value.ZIndex + (windows * 10)

						title.Text = slider_text

						do -- Slider Math
							local Entered = false
							slider.MouseEnter:Connect(function()
								Entered = true
								Window.Draggable = false
							end)
							slider.MouseLeave:Connect(function()
								Entered = false
								Window.Draggable = true
							end)

							local Held = false
							UIS.InputBegan:Connect(function(inputObject)
								if inputObject.UserInputType == Enum.UserInputType.MouseButton1 or inputObject.UserInputType == Enum.UserInputType.Touch then
									Held = true

									spawn(function() -- Loop check
										if Entered and not slider_options.readonly then
											while Held and (not dropdown_open) do
												local mouse_location = gMouse()
												local x = (slider.AbsoluteSize.X - (slider.AbsoluteSize.X - ((mouse_location.X - slider.AbsolutePosition.X)) + 1)) / slider.AbsoluteSize.X

												local min = 0
												local max = 1

												local size = min
												if x >= min and x <= max then
													size = x
												elseif x < min then
													size = min
												elseif x > max then
													size = max
												end

												Resize(indicator, {Size = UDim2.new(size or min, 0, 0, 20)}, options.tween_time)
												local p = math.floor((size or min) * 100)

												local maxv = slider_options.max
												local minv = slider_options.min
												local diff = maxv - minv

												local sel_value = math.floor(((diff / 100) * p) + minv)

												value.Text = tostring(sel_value)
												pcall(callback, sel_value)

												RS.Heartbeat:Wait()
											end
										end
									end)
								end
							end)
							UIS.InputEnded:Connect(function(inputObject)
								if inputObject.UserInputType == Enum.UserInputType.MouseButton1 or inputObject.UserInputType == Enum.UserInputType.Touch then
									Held = false
								end
							end)

							function slider_data:Set(new_value)
								new_value = tonumber(new_value) or 0
								new_value = (((new_value >= 0 and new_value <= 100) and new_value) / 100)

								Resize(indicator, {Size = UDim2.new(new_value or 0, 0, 0, 20)}, options.tween_time)
								local p = math.floor((new_value or 0) * 100)

								local maxv = slider_options.max
								local minv = slider_options.min
								local diff = maxv - minv

								local sel_value = math.floor(((diff / 100) * p) + minv)

								value.Text = tostring(sel_value)
								pcall(callback, sel_value)
							end

							slider_data:Set(slider_options["min"])
						end

						return slider_data, slider
					end

					function tab_data:AddKeybind(keybind_name, callback, keybind_options)
						local keybind_data = {}

						keybind_name = tostring(keybind_name or "New Keybind")
						callback = typeof(callback) == "function" and callback or function()end
						keybind_options = typeof(keybind_options) == "table" and keybind_options or {}
						keybind_options = {
							["standard"] = keybind_options.standard or Enum.KeyCode.RightShift,
						}

						local keybind = Prefabs:FindFirstChild("Keybind"):Clone()
						local input = keybind:FindFirstChild("Input")
						local title = keybind:FindFirstChild("Title")
						keybind.ZIndex = keybind.ZIndex + (windows * 10)
						input.ZIndex = input.ZIndex + (windows * 10)
						input:GetChildren()[1].ZIndex = input:GetChildren()[1].ZIndex + (windows * 10)
						title.ZIndex = title.ZIndex + (windows * 10)

						keybind.Parent = new_tab
						title.Text = "  " .. keybind_name
						keybind.Size = UDim2.new(0, gNameLen(title) + 80, 0, 20)

						local shortkeys = { -- thanks to stroketon for helping me out with this
				            RightControl = 'RightCtrl',
				            LeftControl = 'LeftCtrl',
				            LeftShift = 'LShift',
				            RightShift = 'RShift',
				            MouseButton1 = "Mouse1",
				            MouseButton2 = "Mouse2"
				        }

						local keybind = keybind_options.standard

						function keybind_data:SetKeybind(Keybind)
							local key = shortkeys[Keybind.Name] or Keybind.Name
							input.Text = key
							keybind = Keybind
						end

						UIS.InputBegan:Connect(function(a, b)
							if checks.binding then
								spawn(function()
									wait()
									checks.binding = false
								end)
								return
							end
							if a.KeyCode == keybind and not b then
								pcall(callback, keybind)
							end
						end)

						keybind_data:SetKeybind(keybind_options.standard)

						input.MouseButton1Click:Connect(function()
							if checks.binding then return end
							input.Text = "..."
							checks.binding = true
							local a, b = UIS.InputBegan:Wait()
							keybind_data:SetKeybind(a.KeyCode)
						end)

						return keybind_data, keybind
					end

					function tab_data:AddDropdown(dropdown_name, callback)
						local dropdown_data = {}
						dropdown_name = tostring(dropdown_name or "New Dropdown")
						callback = typeof(callback) == "function" and callback or function()end

						local dropdown = Prefabs:FindFirstChild("Dropdown"):Clone()
						local box = dropdown:FindFirstChild("Box")
						local objects = box:FindFirstChild("Objects")
						local indicator = dropdown:FindFirstChild("Indicator")
						dropdown.ZIndex = dropdown.ZIndex + (windows * 10)
						box.ZIndex = box.ZIndex + (windows * 10)
						objects.ZIndex = objects.ZIndex + (windows * 10)
						indicator.ZIndex = indicator.ZIndex + (windows * 10)
						dropdown:GetChildren()[3].ZIndex = dropdown:GetChildren()[3].ZIndex + (windows * 10)

						dropdown.Parent = new_tab
						dropdown.Text = "      " .. dropdown_name
						box.Size = UDim2.new(1, 0, 0, 0)

						local open = false
						dropdown.MouseButton1Click:Connect(function()
							open = not open

							local len = (#objects:GetChildren() - 1) * 20
							if #objects:GetChildren() - 1 >= 10 then
								len = 10 * 20
								objects.CanvasSize = UDim2.new(0, 0, (#objects:GetChildren() - 1) * 0.1, 0)
							end

							if open then -- Open
								if dropdown_open then return end
								dropdown_open = true
								Resize(box, {Size = UDim2.new(1, 0, 0, len)}, options.tween_time)
								Resize(indicator, {Rotation = 90}, options.tween_time)
							else -- Close
								dropdown_open = false
								Resize(box, {Size = UDim2.new(1, 0, 0, 0)}, options.tween_time)
								Resize(indicator, {Rotation = -90}, options.tween_time)
							end

						end)

						function dropdown_data:Add(n)
							local object_data = {}
							n = tostring(n or "New Object")

							local object = Prefabs:FindFirstChild("DropdownButton"):Clone()

							object.Parent = objects
							object.Text = n
							object.ZIndex = object.ZIndex + (windows * 10)

							object.MouseEnter:Connect(function()
								object.BackgroundColor3 = options.main_color
							end)
							object.MouseLeave:Connect(function()
								object.BackgroundColor3 = Color3.fromRGB(33, 34, 36)
							end)

							if open then
								local len = (#objects:GetChildren() - 1) * 20
								if #objects:GetChildren() - 1 >= 10 then
									len = 10 * 20
									objects.CanvasSize = UDim2.new(0, 0, (#objects:GetChildren() - 1) * 0.1, 0)
								end
								Resize(box, {Size = UDim2.new(1, 0, 0, len)}, options.tween_time)
							end

							object.MouseButton1Click:Connect(function()
								if dropdown_open then
									dropdown.Text = "      [ " .. n .. " ]"
									dropdown_open = false
									open = false
									Resize(box, {Size = UDim2.new(1, 0, 0, 0)}, options.tween_time)
									Resize(indicator, {Rotation = -90}, options.tween_time)
									pcall(callback, n)
								end
							end)

							function object_data:Remove()
								object:Destroy()
							end

							return object, object_data
						end

						return dropdown_data, dropdown
					end

					function tab_data:AddColorPicker(callback)
						local color_picker_data = {}
						callback = typeof(callback) == "function" and callback or function()end

						local color_picker = Prefabs:FindFirstChild("ColorPicker"):Clone()

						color_picker.Parent = new_tab
						color_picker.ZIndex = color_picker.ZIndex + (windows * 10)

						local palette = color_picker:FindFirstChild("Palette")
						local sample = color_picker:FindFirstChild("Sample")
						local saturation = color_picker:FindFirstChild("Saturation")
						palette.ZIndex = palette.ZIndex + (windows * 10)
						sample.ZIndex = sample.ZIndex + (windows * 10)
						saturation.ZIndex = saturation.ZIndex + (windows * 10)

						do -- Color Picker Math
							local h = 0
							local s = 1
							local v = 1

							local function update()
								local color = Color3.fromHSV(h, s, v)
								sample.ImageColor3 = color
								saturation.ImageColor3 = Color3.fromHSV(h, 1, 1)
								pcall(callback, color)
							end

							do
								local color = Color3.fromHSV(h, s, v)
								sample.ImageColor3 = color
								saturation.ImageColor3 = Color3.fromHSV(h, 1, 1)
							end

							local Entered1, Entered2 = false, false
							palette.MouseEnter:Connect(function()
								Window.Draggable = false
								Entered1 = true
							end)
							palette.MouseLeave:Connect(function()
								Window.Draggable = true
								Entered1 = false
							end)
							saturation.MouseEnter:Connect(function()
								Window.Draggable = false
								Entered2 = true
							end)
							saturation.MouseLeave:Connect(function()
								Window.Draggable = true
								Entered2 = false
							end)

							local palette_indicator = palette:FindFirstChild("Indicator")
							local saturation_indicator = saturation:FindFirstChild("Indicator")
							palette_indicator.ZIndex = palette_indicator.ZIndex + (windows * 10)
							saturation_indicator.ZIndex = saturation_indicator.ZIndex + (windows * 10)

							local Held = false
							UIS.InputBegan:Connect(function(inputObject)
								if inputObject.UserInputType == Enum.UserInputType.MouseButton1 or inputObject.UserInputType == Enum.UserInputType.Touch then
									Held = true

									spawn(function() -- Loop check
										while Held and Entered1 and (not dropdown_open) do -- Palette
											local mouse_location = gMouse()

											local x = ((palette.AbsoluteSize.X - (mouse_location.X - palette.AbsolutePosition.X)) + 1)
											local y = ((palette.AbsoluteSize.Y - (mouse_location.Y - palette.AbsolutePosition.Y)) + 1.5)

											local color = Color3.fromHSV(x / 100, y / 100, 0)
											h = x / 100
											s = y / 100

											Resize(palette_indicator, {Position = UDim2.new(0, math.abs(x - 100) - (palette_indicator.AbsoluteSize.X / 2), 0, math.abs(y - 100) - (palette_indicator.AbsoluteSize.Y / 2))}, options.tween_time)

											update()
											RS.Heartbeat:Wait()
										end

										while Held and Entered2 and (not dropdown_open) do -- Saturation
											local mouse_location = gMouse()
											local y = ((palette.AbsoluteSize.Y - (mouse_location.Y - palette.AbsolutePosition.Y)) + 1.5)
											v = y / 100

											Resize(saturation_indicator, {Position = UDim2.new(0, 0, 0, math.abs(y - 100))}, options.tween_time)

											update()
											RS.Heartbeat:Wait()
										end
									end)
								end
							end)
							UIS.InputEnded:Connect(function(inputObject)
								if inputObject.UserInputType == Enum.UserInputType.MouseButton1 or inputObject.UserInputType == Enum.UserInputType.Touch then
									Held = false
								end
							end)

							function color_picker_data:Set(color)
								color = typeof(color) == "Color3" and color or Color3.new(1, 1, 1)
								local h2, s2, v2 = rgbtohsv(color.r * 255, color.g * 255, color.b * 255)
								sample.ImageColor3 = color
								saturation.ImageColor3 = Color3.fromHSV(h2, 1, 1)
								pcall(callback, color)
							end
						end

						return color_picker_data, color_picker
					end

					function tab_data:AddConsole(console_options)
						local console_data = {}

						console_options = typeof(console_options) == "table" and console_options or {["readonly"] = true,["full"] = false,}
						console_options = {
							["y"] = tonumber(console_options.y) or 200,
							["source"] = console_options.source or "Logs",
							["readonly"] = ((console_options.readonly) == true),
							["full"] = ((console_options.full) == true),
						}

						local console = Prefabs:FindFirstChild("Console"):Clone()

						console.Parent = new_tab
						console.ZIndex = console.ZIndex + (windows * 10)
						console.Size = UDim2.new(1, 0, console_options.full and 1 or 0, console_options.y)

						local sf = console:GetChildren()[1]
						local Source = sf:FindFirstChild("Source")
						local Lines = sf:FindFirstChild("Lines")
						Source.ZIndex = Source.ZIndex + (windows * 10)
						Lines.ZIndex = Lines.ZIndex + (windows * 10)

						Source.TextEditable = not console_options.readonly

						do -- Syntax Zindex
							for i,v in next, Source:GetChildren() do
								v.ZIndex = v.ZIndex + (windows * 10) + 1
							end
						end
						Source.Comments.ZIndex = Source.Comments.ZIndex + 1

						do -- Highlighting (thanks to whoever made this)
							local lua_keywords = {"and", "break", "do", "else", "elseif", "end", "false", "for", "function", "goto", "if", "in", "local", "nil", "not", "or", "repeat", "return", "then", "true", "until", "while"}
							local global_env = {"getrawmetatable", "newcclosure", "islclosure", "setclipboard", "game", "workspace", "script", "math", "string", "table", "print", "wait", "BrickColor", "Color3", "next", "pairs", "ipairs", "select", "unpack", "Instance", "Vector2", "Vector3", "CFrame", "Ray", "UDim2", "Enum", "assert", "error", "warn", "tick", "loadstring", "_G", "shared", "getfenv", "setfenv", "newproxy", "setmetatable", "getmetatable", "os", "debug", "pcall", "ypcall", "xpcall", "rawequal", "rawset", "rawget", "tonumber", "tostring", "type", "typeof", "_VERSION", "coroutine", "delay", "require", "spawn", "LoadLibrary", "settings", "stats", "time", "UserSettings", "version", "Axes", "ColorSequence", "Faces", "ColorSequenceKeypoint", "NumberRange", "NumberSequence", "NumberSequenceKeypoint", "gcinfo", "elapsedTime", "collectgarbage", "PhysicalProperties", "Rect", "Region3", "Region3int16", "UDim", "Vector2int16", "Vector3int16", "load", "fire", "Fire"}

							local Highlight = function(string, keywords)
							    local K = {}
							    local S = string
							    local Token =
							    {
							        ["="] = true,
							        ["."] = true,
							        [","] = true,
							        ["("] = true,
							        [")"] = true,
							        ["["] = true,
							        ["]"] = true,
							        ["{"] = true,
							        ["}"] = true,
							        [":"] = true,
							        ["*"] = true,
							        ["/"] = true,
							        ["+"] = true,
							        ["-"] = true,
							        ["%"] = true,
									[";"] = true,
									["~"] = true
							    }
							    for i, v in pairs(keywords) do
							        K[v] = true
							    end
							    S = S:gsub(".", function(c)
							        if Token[c] ~= nil then
							            return "\32"
							        else
							            return c
							        end
							    end)
							    S = S:gsub("%S+", function(c)
							        if K[c] ~= nil then
							            return c
							        else
							            return (" "):rep(#c)
							        end
							    end)

							    return S
							end

							local hTokens = function(string)
							    local Token =
							    {
							        ["="] = true,
							        ["."] = true,
							        [","] = true,
							        ["("] = true,
							        [")"] = true,
							        ["["] = true,
							        ["]"] = true,
							        ["{"] = true,
							        ["}"] = true,
							        [":"] = true,
							        ["*"] = true,
							        ["/"] = true,
							        ["+"] = true,
							        ["-"] = true,
							        ["%"] = true,
									[";"] = true,
									["~"] = true
							    }
							    local A = ""
							    string:gsub(".", function(c)
							        if Token[c] ~= nil then
							            A = A .. c
							        elseif c == "\n" then
							            A = A .. "\n"
									elseif c == "\t" then
										A = A .. "\t"
							        else
							            A = A .. "\32"
							        end
							    end)

							    return A
							end

							local strings = function(string)
							    local highlight = ""
							    local quote = false
							    string:gsub(".", function(c)
							        if quote == false and c == "\34" then
							            quote = true
							        elseif quote == true and c == "\34" then
							            quote = false
							        end
							        if quote == false and c == "\34" then
							            highlight = highlight .. "\34"
							        elseif c == "\n" then
							            highlight = highlight .. "\n"
									elseif c == "\t" then
									    highlight = highlight .. "\t"
							        elseif quote == true then
							            highlight = highlight .. c
							        elseif quote == false then
							            highlight = highlight .. "\32"
							        end
							    end)

							    return highlight
							end

							local info = function(string)
							    local highlight = ""
							    local quote = false
							    string:gsub(".", function(c)
							        if quote == false and c == "[" then
							            quote = true
							        elseif quote == true and c == "]" then
							            quote = false
							        end
							        if quote == false and c == "\]" then
							            highlight = highlight .. "\]"
							        elseif c == "\n" then
							            highlight = highlight .. "\n"
									elseif c == "\t" then
									    highlight = highlight .. "\t"
							        elseif quote == true then
							            highlight = highlight .. c
							        elseif quote == false then
							            highlight = highlight .. "\32"
							        end
							    end)

							    return highlight
							end

							local comments = function(string)
							    local ret = ""
							    string:gsub("[^\r\n]+", function(c)
							        local comm = false
							        local i = 0
							        c:gsub(".", function(n)
							            i = i + 1
							            if c:sub(i, i + 1) == "--" then
							                comm = true
							            end
							            if comm == true then
							                ret = ret .. n
							            else
							                ret = ret .. "\32"
							            end
							        end)
							        ret = ret
							    end)

							    return ret
							end

							local numbers = function(string)
							    local A = ""
							    string:gsub(".", function(c)
							        if tonumber(c) ~= nil then
							            A = A .. c
							        elseif c == "\n" then
							            A = A .. "\n"
									elseif c == "\t" then
										A = A .. "\t"
							        else
							            A = A .. "\32"
							        end
							    end)

							    return A
							end

							local highlight_lua = function(type)
								if type == "Text" then
									Source.Text = Source.Text:gsub("\13", "")
									Source.Text = Source.Text:gsub("\t", "      ")
									local s = Source.Text

									Source.Keywords.Text = Highlight(s, lua_keywords)
									Source.Globals.Text = Highlight(s, global_env)
									Source.RemoteHighlight.Text = Highlight(s, {"FireServer", "fireServer", "InvokeServer", "invokeServer"})
									Source.Tokens.Text = hTokens(s)
									Source.Numbers.Text = numbers(s)
									Source.Strings.Text = strings(s)
									Source.Comments.Text = comments(s)

									local lin = 1
									s:gsub("\n", function()
										lin = lin + 1
									end)

									Lines.Text = ""
									for i = 1, lin do
										Lines.Text = Lines.Text .. i .. "\n"
									end

									sf.CanvasSize = UDim2.new(0, 0, lin * 0.153846154, 0)
								end

							local highlight_logs = function(type)
							end
								if type == "Text" then
									Source.Text = Source.Text:gsub("\13", "")
									Source.Text = Source.Text:gsub("\t", "      ")
									local s = Source.Text

									Source.Info.Text = info(s)

									local lin = 1
									s:gsub("\n", function()
										lin = lin + 1
									end)

									sf.CanvasSize = UDim2.new(0, 0, lin * 0.153846154, 0)
								end
							end

							if console_options.source == "Lua" then
								highlight_lua("Text")
								Source.Changed:Connect(highlight_lua)
							elseif console_options.source == "Logs" then
								Lines.Visible = false

								highlight_logs("Text")
								Source.Changed:Connect(highlight_logs)
							end

							function console_data:Set(code)
								Source.Text = tostring(code)
							end

							function console_data:Get()
								return Source.Text
							end

							function console_data:Log(msg)
								Source.Text = Source.Text .. "[*] " .. tostring(msg) .. "\n"
							end

						end

						return console_data, console
					end

					function tab_data:AddHorizontalAlignment()
						local ha_data = {}

						local ha = Prefabs:FindFirstChild("HorizontalAlignment"):Clone()
						ha.Parent = new_tab

						function ha_data:AddButton(...)
							local data, object
							local ret = {tab_data:AddButton(...)}
							if typeof(ret[1]) == "table" then
								data = ret[1]
								object = ret[2]
								object.Parent = ha
								return data, object
							else
								object = ret[1]
								object.Parent = ha
								return object
							end
						end

						return ha_data, ha
					end

					function tab_data:AddFolder(folder_name) -- [Folder]
						local folder_data = {}

						folder_name = tostring(folder_name or "New Folder")

						local folder = Prefabs:FindFirstChild("Folder"):Clone()
						local button = folder:FindFirstChild("Button")
						local objects = folder:FindFirstChild("Objects")
						local toggle = button:FindFirstChild("Toggle")
						folder.ZIndex = folder.ZIndex + (windows * 10)
						button.ZIndex = button.ZIndex + (windows * 10)
						objects.ZIndex = objects.ZIndex + (windows * 10)
						toggle.ZIndex = toggle.ZIndex + (windows * 10)
						button:GetChildren()[1].ZIndex = button:GetChildren()[1].ZIndex + (windows * 10)

						folder.Parent = new_tab
						button.Text = "      " .. folder_name

						spawn(function()
							while true do
								if button and button:GetChildren()[1] then
									button:GetChildren()[1].ImageColor3 = options.main_color
								end
								RS.Heartbeat:Wait()
							end
						end)

						local function gFolderLen()
							local n = 25
							for i,v in next, objects:GetChildren() do
								if not (v:IsA("UIListLayout")) then
									n = n + v.AbsoluteSize.Y + 5
								end
							end
							return n
						end

						local open = false
						button.MouseButton1Click:Connect(function()
							if open then -- Close
								Resize(toggle, {Rotation = 0}, options.tween_time)
								objects.Visible = false
							else -- Open
								Resize(toggle, {Rotation = 90}, options.tween_time)
								objects.Visible = true
							end

							open = not open
						end)

						spawn(function()
							while true do
								Resize(folder, {Size = UDim2.new(1, 0, 0, (open and gFolderLen() or 20))}, options.tween_time)
								wait()
							end
						end)

						for i,v in next, tab_data do
							folder_data[i] = function(...)
								local data, object
								local ret = {v(...)}
								if typeof(ret[1]) == "table" then
									data = ret[1]
									object = ret[2]
									object.Parent = objects
									return data, object
								else
									object = ret[1]
									object.Parent = objects
									return object
								end
							end
						end

						return folder_data, folder
					end

				end

				return tab_data, new_tab
			end
		end
	end

	do
		for i, v in next, Window:GetDescendants() do
			if hasprop(v, "ZIndex") then
				v.ZIndex = v.ZIndex + (windows * 10)
			end
		end
	end

	return window_data, Window
end

-- Lock
local NotificationHolder = loadstring(game:HttpGet("https://raw.githubusercontent.com/BocusLuke/UI/main/STX/Module.Lua"))()
local Notification = loadstring(game:HttpGet("https://raw.githubusercontent.com/BocusLuke/UI/main/STX/Client.Lua"))()

function SendNotification(text)
    Notification:Notify(
        {Title = "Infinity.hook", Description = "By Vac (@movedirection) - "..text},
        {OutlineColor = Color3.fromRGB(0,0,180),Time = 3, Type = "image"},
        {Image = "http://www.roblox.com/asset/?id=6023426923", ImageColor = Color3.fromRGB(0,0,180)}
    )
end
--[[
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
]]--

getgenv().Settings = {
    FearLas = {
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
getgenv().Resolver = false

function calculateVelocity(initialPos, finalPos, timeInterval)
    local displacement = finalPos - initialPos
    local velocity = displacement / timeInterval
    return velocity
    end
    game:GetService('RunService').RenderStepped:connect(function(deltaTime)
 -- if resolver enabled shit not needed ðŸ™ðŸ¾ðŸ™ðŸ¾
        local character = Plr.Character[getgenv().SelectedPart]
        local lastPosition = character.Position
            task.wait()
        local currentPosition = character.Position
        local velocity = calculateVelocity(lastPosition, currentPosition, deltaTime)
        character.AssemblyLinearVelocity = velocity
        character.Velocity = velocity
            lastPosition = currentPosition
        end
    end)

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
        e.AlwaysOnTop = getgenv().Settings.FearLas.DOT
        local a = Instance.new("Frame", e)
        if getgenv().Settings.FearLas.DOT == true then
        a.Size = UDim2.new(1, 1, 1, 1)
        else
        a.Size = UDim2.new(0, 0, 0, 0)
        end
        if getgenv().Settings.FearLas.DOT == true then
        a.Transparency = 0
        a.BackgroundTransparency = 0
        else
        a.Transparency = 1
        a.BackgroundTransparency = 1
        end
        a.BackgroundColor3 = Color
        local g = Instance.new("UICorner", a)
        if getgenv().Settings.FearLas.DOT == false then
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
        if getgenv().Settings.FearLas.DOT == true then
        placemarker.Size = Vector3.new(0, 0, 0)
        else
        placemarker.Size = Vector3.new(0, 0, 0)
        end
        placemarker.Transparency = 0.75
        if getgenv().Settings.FearLas.DOT then
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

local enabled = false
local button = createButton("button", "Infinity", UDim2.new(0.7, 0, 0, 0), UDim2.new(0.3, 0, 0.3, 0), 35)

function hitsound()
    local Hit = Instance.new("Sound")
    Hit.Parent = game.SoundService
    Hit.SoundId = getcustomasset(getgenv().Settings.FearLas.OnHit.Hitsound.Sound)
    Hit.Volume = getgenv().Settings.FearLas.OnHit.Hitsound.Volume
    Hit.Looped = false
    Hit:Play()
    Hit.Ended:Connect(function()                                         Hit:Destroy()
        end)
end

button.MouseButton1Click:Connect(function()
if getgenv().Settings.FearLas.Enabled or getgenv().Settings.FearLas.Camera.Enabled then
            if enabled == true then
                enabled = false
                    Plr = getClosestPlayerToCursor()
                if getgenv().Settings.FearLas.NOTIF == true then 
 SendNotification("Unlocked")
 button.TextColor3 = Color3.new(1, 1, 1)
           end
            else
                Plr = getClosestPlayerToCursor()
                TargetPlayer = tostring(Plr)
                enabled = true
local oldHealt = game.Players[TargetPlayer].Character.Humanoid.Health
                        if getgenv().Settings.FearLas.OnHit.Hitsound.Enabled and Plr ~= nil then

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
              
if getgenv().Settings.FearLas.OnHit.Hitchams.Enabled then
   
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
                        Obj.Material = getgenv().Settings.FearLas.OnHit.Hitchams.Material
                        Obj.Color = getgenv().Settings.FearLas.OnHit.Hitchams.Color
                        Obj.Transparency = getgenv().Settings.FearLas.OnHit.Hitchams.Transparency
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
button.TextColor3 = Color3.new(0, 0, 180)
                if getgenv().Settings.FearLas.NOTIF == true then
SendNotification("Enemy: "..Plr.Character.Humanoid.DisplayName)
                end
            end
   else
  SendNotification("the lock isnt enabled retard!")
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
        if getgenv().Settings.FearLas.TargetStats and getgenv().Settings.FearLas.Enabled and TargetAimEnabled then
            if Plr and IsAlive(Plr) then
                Background.Visible = true
                NameOfTarget.Text = tostring(Plr.Character.Humanoid.DisplayName).." ["..tostring(Plr.Name).."]"
                Picture.Image  = "rbxthumb://type=AvatarHeadShot&id=" ..Plr.UserId.. "&w=420&h=420"
                HealthBar:TweenSize(UDim2.new(Plr.Character.Humanoid.Health / Plr.Character.Humanoid.MaxHealth, 0, 1, 0), "In", "Linear", 0.25)
                spawn(function()
                    if getgenv().Settings.FearLas.TargetStats == false then
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
        local shortestDistance = getgenv().Settings.FearLas.FOV
 
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
    local shortestDistance = getgenv().Settings.FearLas.FOV
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

local Stats = game:GetService("Stats")

local Piiing = Stats:WaitForChild("Network"):WaitForChild("ServerStatsItem"):WaitForChild("Data Ping")
 
    local pingvalue = nil;
    local split = nil;
    local ping = nil;
    
local LocalHL = Instance.new("Highlight") 
    game:GetService"RunService".Stepped:connect(function()
        if enabled and getgenv(). Settings.FearLas.Enabled and Plr.Character ~= nil and Plr.Character:FindFirstChild("HumanoidRootPart") or enabled and getgenv(). Settings.FearLas.Camera.Enabled and Plr.Character ~= nil and Plr.Character:FindFirstChild("HumanoidRootPart") then
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

if getgenv().Settings.FearLas.AdvancedAutoPred == true and enabled then
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
if getgenv().Settings.FearLas.AUTOPRED == true and enabled then
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

if getgenv().Settings.FearLas.Resolver.Enabled then
if getgenv().Settings.FearLas.Resolver.Type == "Delta Time" then
print("wsg")
end
if getgenv().Settings.FearLas.Resolver.Type == "Recalculator" then
print("wsg")
end
if getgenv().Settings.FearLas.Resolver.Type == "No Y Velocity" then
print("wsg")
end
end
    end)


game:GetService"RunService".Stepped:connect(function()
    if enabled and getgenv().Settings.FearLas.Camera.Enabled then
        if Plr ~= nil then
            local shakeOffset = Vector3.new(
                math.random(-getgenv().ShakeX, getgenv().ShakeX),
                math.random(-getgenv().ShakeY, getgenv().ShakeY),
                math.random(-getgenv().ShakeZ, getgenv().ShakeZ)
            ) * 0.1
local HorizontalLookPosition = CFrame.new(CC.CFrame.p, Plr.Character[getgenv().SelectedPart].CFrame.Position+(Vector3.new(Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.X/getgenv().CAMPREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Y/getgenv().CAMJUMPPREDICTION,Plr.Character.HumanoidRootPart.AssemblyLinearVelocity.Z/getgenv().CAMPREDICTION))+shakeOffset)
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
        if enabled and getnamecallmethod() == "FireServer" and table.find(vap, args[2]) and getgenv().Settings.FearLas.Enabled and Plr.Character ~= nil and getgenv().Settings.FearLas.LOCKTYPE == "Namecall" then
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
    if index == "Hit" and getgenv().Settings.FearLas.LOCKTYPE == "Index" and enabled and Plr.Character ~= nil and getgenv().Settings.FearLas.Enabled then
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

if getgenv().Settings.FearLas.Camera.HoodCustomsBypass == true then
for _, con in next, getconnections(workspace.CurrentCamera.Changed) do
  task.wait(0.000001)
    con:Disable()

end


for _, con in next, getconnections(workspace.CurrentCamera:GetPropertyChangedSignal("CFrame")) do
   task.wait(0.000001)
    con:Disable()

end
end

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

do -- Example UI
	local Window = library:AddWindow("Infinity.hook", {
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
		getgenv().Settings.FearLas.Camera.Enabled = bool
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

local thingsetup = Tab:AddSwitch("Auto SetUp", function(bool)
	getgenv().Settings.FearLas.AdvancedAutoPred = bool
end)
thingsetup:Set(false)

	local Dropdown = Tab:AddDropdown("Aim Bone", function(object)
		getgenv().SelectedPart = object
		end)
Dropdown:Add("HumanoidRootPart")
Dropdown:Add("UpperTorso")
Dropdown:Add("LowerTorso")
Dropdown:Add("Head")
--// Target Lock
	Teb:AddLabel("Configuration")
	local bled = Teb:AddSwitch("Enabled", function(bool)
	getgenv().Settings.FearLas.Enabled = bool
	end)
bled:Set(false)
		local TypeThing = Teb:AddDropdown("Aim Type", function(object)
			getgenv().Settings.FearLas.LOCKTYPE = object
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

	Teb:AddTextBox("Jump Offset Value", function(text)
			print(text)
		end, 
	{
	["clear"] = false, -- Default: true (options are optional)
	})

		local Swiitch = Teb:AddSwitch("Auto SetUp", function(bool)
			getgenv().Settings.FearLas.AUTOPRED = bool
		end)
		Swiitch:Set(false)

		local pptch = Teb:AddSwitch("pp", function(bool)
			getgenv().Resolver = bool
		end)
		pptch:Set(false)

		local Droopdown = Teb:AddDropdown("Aim Bone", function(object)
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
		getgenv().Settings.FearLas.OnHit.Hitsound.Enabled = bool
	end)
HitsoundEnabledThing:Set(false)

local SoundsOptions = HitsoundsFolder:AddDropdown("Sound Effect", function(object)
		getgenv().Settings.FearLas.OnHit.Hitsound.Sound = object
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
		getgenv().Settings.FearLas.OnHit.Hitchams.Enabled = bool
end)
HitchamsEnabledThing:Set(false)

local MaterialOptions = HitchamsFolder:AddDropdown("Material", function(object)
		getgenv().Settings.FearLas.OnHit.Hitchams.Material = object
		end)

MaterialOptions:Add("ForceField")
MaterialOptions:Add("Neon")
MaterialOptions:Add("Glass")
MaterialOptions:Add("Plastic")
MaterialOptions:Add("Brick")

local AntiFolder = Tib:AddFolder("Anti Lock")
		AntiFolder:AddLabel("Anti Locks")

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
ActualMiscs:AddButton("CFrame Speed", function()
-- Initial values
getgenv().Speed = false
getgenv().SpeedAmount = 2
-- Create a basic GUI
local ScreenGui = Instance.new("ScreenGui")
ScreenGui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
ScreenGui.ResetOnSpawn = false
local ToggleButton = Instance.new("TextButton")
ToggleButton.Text = "Toggle Speed"
ToggleButton.Parent = ScreenGui
ToggleButton.BackgroundTransparency = 0.5
ToggleButton.BorderSizePixel = 0
ToggleButton.Position = UDim2.new(1, -120, 0, 35) -- Adjusted the position to top right corner
ToggleButton.Size = UDim2.new(0, 100, 0, 18)
ToggleButton.BackgroundColor3 = Color3.fromRGB(0,0,180)
ToggleButton.TextColor3 = Color3.fromRGB(255, 255, 255)
local UICorner = Instance.new("UICorner")
UICorner.Parent = ToggleButton
local function onButtonClicked()
    getgenv().Speed = not getgenv().Speed
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
local DelaySwitch = ActualMiscs:AddSwitch("No Delay", function(bool)
	getgenv().NoDelay = bool
end)
DelaySwitch:Set(false)
ActualMiscs:AddButton("Rightclick", function()
local Player = game.Players.LocalPlayer
local PlayerGui = Player:WaitForChild("PlayerGui")

local ScreenGui = Instance.new("ScreenGui")
ScreenGui.Name = "Corporations"
ScreenGui.ResetOnSpawn = false -- Keep the GUI after respawn
ScreenGui.Parent = PlayerGui

local TextButton = Instance.new("TextButton")
TextButton.Name = "Imperial"
TextButton.Parent = ScreenGui
TextButton.BackgroundColor3 = Color3.fromRGB(0,0,180)
TextButton.BackgroundTransparency = 0.5
TextButton.BorderSizePixel = 0
TextButton.Position = UDim2.new(1, -120, 0, 10) -- Adjusted the position to top right corner
TextButton.Size = UDim2.new(0, 100, 0, 18)
TextButton.Font = Enum.Font.SourceSans
TextButton.Text = "Rightclick"
TextButton.TextColor3 = Color3.fromRGB(255, 255, 255)
TextButton.TextSize = 18
local UICorner = Instance.new("UICorner")
UICorner.Parent = TextButton

-- Function to send the keybind
local function OnButtonClick()
    local vim = game:GetService("VirtualInputManager")
    vim:SendKeyEvent(true, "ButtonL2", false, game)
end

-- Event connection
TextButton.MouseButton1Click:Connect(OnButtonClick)
end)

getgenv().AutoShoot = false
getgenv().TimerShoot = 0.00000001

ActualMiscs:AddButton("Auto Click (buggy)", function()

-- Initial values

-- Create a basic GUI
local ScreeenGui = Instance.new("ScreenGui")
ScreeenGui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
ScreeenGui.ResetOnSpawn = false
local TooggleButton = Instance.new("TextButton")
TooggleButton.Text = "Auto Click"
TooggleButton.Parent = ScreeenGui
TooggleButton.BackgroundTransparency = 0.5
TooggleButton.BorderSizePixel = 0
TooggleButton.Position = UDim2.new(1, -120, 0, 55) -- Adjusted the position to top right corner
TooggleButton.Size = UDim2.new(0, 100, 0, 18)
TooggleButton.BackgroundColor3 = Color3.fromRGB(0,0,180)
TooggleButton.TextColor3 = Color3.fromRGB(255, 255, 255)
local UIICorner = Instance.new("UICorner")
UIICorner.Parent = TooggleButton

local function oonButtonClicked()
    getgenv().AutoShoot = not getgenv().AutoShoot
end
TooggleButton.MouseButton1Click:Connect(oonButtonClicked)
-- Your existing code modified for the GUI
while getgenv().AutoShoot == true do
wait(getgenv().TimerShoot)
mouse1click()
end

end)
ActualMiscs:AddTextBox("Click Speed", function(text)
getgenv().TimerShoot = text
end, 
{
["clear"] = false, -- Default: true (options are optional)
})

if getgenv().NoDelay == true then
game:GetService("CorePackages").Packages:Destroy()
end
local BypassFolder = Tib:AddFolder("Anti Cheat Bypass")
BypassFolder:AddLabel("Anti Cheats")
local Bypass1 = BypassFolder:AddSwitch("Hood Custom Camlock Bypass", function(bool)
	getgenv().Settings.FearLas.Camera.HoodCustomsBypass = bool
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
		Console:Set("-- Gamer time!\nfor i = 1, 9 do \n    print(i)\nend")
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
