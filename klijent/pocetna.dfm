object FormPocetna: TFormPocetna
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize, biMaximize, biHelp]
  BorderWidth = 50
  Caption = 'Pocetna'
  ClientHeight = 448
  ClientWidth = 722
  Color = clBtnFace
  Constraints.MinHeight = 400
  Constraints.MinWidth = 620
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Verdana'
  Font.Style = []
  OldCreateOrder = False
  OnDblClick = Button1Click
  DesignSize = (
    722
    448)
  PixelsPerInch = 120
  TextHeight = 16
  object Button1: TButton
    AlignWithMargins = True
    Left = 262
    Top = 164
    Width = 161
    Height = 97
    Anchors = []
    Caption = 'KRENI'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -25
    Font.Name = 'Lucida Handwriting'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
    ExplicitLeft = 168
    ExplicitTop = 72
  end
  object StaticText1: TStaticText
    AlignWithMargins = True
    Left = 110
    Top = 32
    Width = 505
    Height = 56
    Anchors = []
    AutoSize = False
    Caption = 'Dobro do'#353'li u YummyLog'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clCream
    Font.Height = -33
    Font.Name = 'Lucida Handwriting'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    TabOrder = 1
    ExplicitLeft = 0
    ExplicitTop = 8
  end
  object StaticText2: TStaticText
    Left = 550
    Top = 420
    Width = 146
    Height = 20
    Anchors = [akRight, akBottom]
    Caption = 'Version 1, vviskov, 2015.'
    Color = clCaptionText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clFuchsia
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsItalic]
    ParentColor = False
    ParentFont = False
    TabOrder = 2
    ExplicitLeft = 352
    ExplicitTop = 225
  end
  object XMLDocument1: TXMLDocument
    FileName = 
      'C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\ReceptiM' +
      'ock.xml'
    Left = 584
    Top = 240
  end
end
