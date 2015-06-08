object FormLista: TFormLista
  Left = 0
  Top = 0
  HelpContext = 6
  Caption = 'Lista'
  ClientHeight = 603
  ClientWidth = 988
  Color = clBtnFace
  Constraints.MinHeight = 650
  Constraints.MinWidth = 1000
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clInactiveCaptionText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  HelpFile = 'YummyHelp.chm'
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  OnShow = FormShow
  DesignSize = (
    988
    603)
  PixelsPerInch = 120
  TextHeight = 16
  object Button1: TButton
    Left = 855
    Top = 40
    Width = 75
    Height = 25
    HelpContext = 4
    Anchors = [akTop, akRight]
    Caption = 'Pregled'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaptionText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 855
    Top = 87
    Width = 75
    Height = 25
    HelpContext = 9
    Anchors = [akTop, akRight]
    Caption = 'Dodaj'
    Default = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaptionText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
  object ListView1: TListView
    Left = 24
    Top = 24
    Width = 769
    Height = 550
    Anchors = [akLeft, akTop, akRight, akBottom]
    Columns = <
      item
        AutoSize = True
        Caption = 'Naziv'
        MinWidth = 150
      end
      item
        AutoSize = True
        Caption = 'Kuhar'
        MinWidth = 150
      end
      item
        AutoSize = True
        Caption = 'Opis'
        MinWidth = 300
      end>
    ColumnClick = False
    Constraints.MinHeight = 550
    Constraints.MinWidth = 600
    ReadOnly = True
    RowSelect = True
    TabOrder = 2
    ViewStyle = vsReport
    OnSelectItem = ListView1SelectItem
  end
  object Button3: TButton
    Left = 855
    Top = 136
    Width = 75
    Height = 25
    HelpContext = 9
    Anchors = [akTop, akRight]
    Caption = 'Uredi'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaptionText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 855
    Top = 184
    Width = 75
    Height = 25
    HelpContext = 5
    Anchors = [akTop, akRight]
    Caption = 'Bri'#353'i'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clInactiveCaptionText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = Button4Click
  end
  object XMLDocument1: TXMLDocument
    FileName = 
      'C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\recepti.' +
      'xml'
    Options = [doNodeAutoCreate, doNodeAutoIndent, doAttrNull, doAutoPrefix, doNamespaceDecl]
    Left = 880
    Top = 256
    DOMVendorDesc = 'ADOM XML v4'
  end
end
