object FormPocetna: TFormPocetna
  Left = 0
  Top = 0
  Caption = 'FormPocetna'
  ClientHeight = 291
  ClientWidth = 633
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Pokazi'
    TabOrder = 0
    OnClick = Button1Click
  end
  object XMLDocument1: TXMLDocument
    FileName = 
      'C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\ReceptiM' +
      'ock.xml'
    Left = 584
    Top = 16
  end
end
