object FormDodaj: TFormDodaj
  Left = 0
  Top = 0
  Caption = 'Dodaj recept'
  ClientHeight = 753
  ClientWidth = 682
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
    682
    753)
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 39
    Top = 32
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
    Left = 39
    Top = 94
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
    Left = 39
    Top = 151
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
    Left = 39
    Top = 230
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
    Left = 39
    Top = 506
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
    Left = 136
    Top = 32
    Width = 400
    Height = 24
    Anchors = [akLeft]
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 136
    Top = 94
    Width = 400
    Height = 24
    Anchors = [akLeft]
    TabOrder = 1
  end
  object ListView1: TListView
    Left = 136
    Top = 230
    Width = 400
    Height = 193
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
    Left = 144
    Top = 444
    Width = 110
    Height = 25
    Anchors = [akLeft]
    Caption = 'Dodaj sastojak'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 284
    Top = 444
    Width = 110
    Height = 25
    Anchors = [akLeft]
    Caption = 'Uredi sastojak'
    Enabled = False
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 419
    Top = 444
    Width = 110
    Height = 25
    Anchors = [akLeft]
    Caption = 'Izbri'#353'i sastojak'
    Enabled = False
    TabOrder = 5
    OnClick = Button3Click
  end
  object Memo1: TMemo
    Left = 136
    Top = 151
    Width = 400
    Height = 40
    Anchors = [akLeft]
    Constraints.MinHeight = 40
    TabOrder = 6
  end
  object Memo2: TMemo
    Left = 136
    Top = 506
    Width = 400
    Height = 100
    Anchors = [akLeft]
    Constraints.MinHeight = 100
    TabOrder = 7
  end
  object Button4: TButton
    Left = 226
    Top = 644
    Width = 75
    Height = 25
    Anchors = [akLeft]
    Caption = 'Spremi'
    TabOrder = 8
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 368
    Top = 644
    Width = 75
    Height = 25
    Anchors = [akLeft]
    Caption = 'Odustani'
    TabOrder = 9
    OnClick = Button5Click
  end
end
