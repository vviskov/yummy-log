object FormPregled: TFormPregled
  Left = 0
  Top = 0
  BorderWidth = 50
  Caption = 'Pregled recepta'
  ClientHeight = 553
  ClientWidth = 600
  Color = clBtnFace
  Constraints.MinHeight = 500
  Constraints.MinWidth = 700
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnShow = FormShow
  DesignSize = (
    600
    553)
  PixelsPerInch = 120
  TextHeight = 16
  object Pregled: TMemo
    Left = 0
    Top = 0
    Width = 600
    Height = 551
    Alignment = taCenter
    Anchors = [akLeft, akTop, akRight, akBottom]
    Constraints.MinHeight = 500
    Constraints.MinWidth = 599
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Handwriting'
    Font.Style = []
    Lines.Strings = (
      'Pregled')
    ParentFont = False
    TabOrder = 0
    ExplicitHeight = 500
  end
end
