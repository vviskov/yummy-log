object FormDodaj: TFormDodaj
  Left = 0
  Top = 0
  BorderWidth = 30
  Caption = 'Dodaj recept'
  ClientHeight = 693
  ClientWidth = 622
  Color = clBtnFace
  Constraints.MinHeight = 800
  Constraints.MinWidth = 700
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  DesignSize = (
    622
    693)
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 33
    Top = 27
    Width = 48
    Height = 24
    Anchors = [akLeft]
    Caption = 'Naziv'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 33
    Top = 84
    Width = 52
    Height = 24
    Anchors = [akLeft]
    Caption = 'Kuhar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 33
    Top = 138
    Width = 39
    Height = 24
    Anchors = [akLeft]
    Caption = 'Opis'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 33
    Top = 214
    Width = 69
    Height = 24
    Anchors = [akLeft]
    Caption = 'Sastojci'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 33
    Top = 497
    Width = 81
    Height = 24
    Anchors = [akLeft]
    Caption = 'Postupak'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 137
    Top = 27
    Width = 400
    Height = 24
    HelpContext = 3
    Anchors = [akLeft]
    AutoSelect = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 137
    Top = 84
    Width = 400
    Height = 24
    HelpContext = 7
    Anchors = [akLeft]
    TabOrder = 1
  end
  object ListView1: TListView
    Left = 137
    Top = 214
    Width = 400
    Height = 193
    HelpContext = 12
    Anchors = [akLeft]
    Columns = <
      item
        AutoSize = True
        Caption = 'Naziv'
      end
      item
        AutoSize = True
        Caption = 'Koli'#269'ina'
      end>
    ReadOnly = True
    RowSelect = True
    TabOrder = 2
    ViewStyle = vsReport
    OnSelectItem = ListView1SelectItem
  end
  object Button1: TButton
    Left = 152
    Top = 443
    Width = 110
    Height = 25
    Anchors = [akLeft]
    Caption = 'Dodaj sastojak'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 286
    Top = 443
    Width = 110
    Height = 25
    Anchors = [akLeft]
    Caption = 'Uredi sastojak'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 420
    Top = 443
    Width = 110
    Height = 25
    Anchors = [akLeft]
    Caption = 'Izbri'#353'i sastojak'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = Button3Click
  end
  object Memo1: TMemo
    Left = 137
    Top = 142
    Width = 400
    Height = 40
    HelpContext = 14
    Anchors = [akLeft]
    Constraints.MinHeight = 40
    TabOrder = 6
  end
  object Memo2: TMemo
    Left = 137
    Top = 497
    Width = 400
    Height = 100
    HelpContext = 8
    Anchors = [akLeft]
    Constraints.MinHeight = 100
    TabOrder = 7
  end
  object Button4: TButton
    Left = 235
    Top = 627
    Width = 75
    Height = 25
    Anchors = [akLeft]
    Caption = 'Spremi'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 369
    Top = 627
    Width = 75
    Height = 25
    Anchors = [akLeft]
    Caption = 'Odustani'
    TabOrder = 9
    OnClick = Button5Click
  end
end
