object FormPocetna: TFormPocetna
  Left = 0
  Top = 0
  Anchors = []
  BorderIcons = [biSystemMenu, biMinimize, biMaximize, biHelp]
  BorderWidth = 50
  Caption = 'YummyLog'
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
  HelpFile = 'YummyHelp.chm'
  OldCreateOrder = False
  OnClose = FormClose
  OnDblClick = Button1Click
  DesignSize = (
    722
    448)
  PixelsPerInch = 120
  TextHeight = 16
  object Button1: TButton
    AlignWithMargins = True
    Left = 270
    Top = 212
    Width = 160
    Height = 80
    HelpContext = 1
    Anchors = []
    Caption = 'KRENI'
    Constraints.MinHeight = 80
    Constraints.MinWidth = 160
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -25
    Font.Name = 'Lucida Handwriting'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object StaticText1: TStaticText
    AlignWithMargins = True
    Left = 86
    Top = 32
    Width = 550
    Height = 56
    HelpContext = 10
    Alignment = taCenter
    Anchors = []
    AutoSize = False
    Caption = 'Dobro do'#353'li u YummyLog'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -33
    Font.Name = 'Lucida Handwriting'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    TabOrder = 1
  end
  object StaticText2: TStaticText
    Left = 550
    Top = 420
    Width = 146
    Height = 20
    HelpContext = 11
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
  end
  object StaticText3: TStaticText
    Left = 160
    Top = 94
    Width = 405
    Height = 31
    HelpContext = 10
    Anchors = []
    Caption = 'Najbolja personalizirana kuharica'
    Constraints.MinWidth = 405
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Lucida Handwriting'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
end
