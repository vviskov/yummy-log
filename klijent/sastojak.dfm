object DialogSastojak: TDialogSastojak
  Left = 227
  Top = 108
  BorderStyle = bsDialog
  Caption = 'Sastojak'
  ClientHeight = 220
  ClientWidth = 282
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnClose = FormClose
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 40
    Top = 56
    Width = 30
    Height = 16
    Caption = 'Naziv'
  end
  object Label2: TLabel
    Left = 40
    Top = 96
    Width = 43
    Height = 16
    Caption = 'Koli'#269'ina'
  end
  object OKBtn: TButton
    Left = 40
    Top = 154
    Width = 93
    Height = 31
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = 'OK'
    Default = True
    ModalResult = 1
    TabOrder = 0
    OnClick = OKBtnClick
  end
  object CancelBtn: TButton
    Left = 141
    Top = 154
    Width = 93
    Height = 31
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Cancel = True
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 1
    OnClick = CancelBtnClick
  end
  object Edit1: TEdit
    Left = 112
    Top = 53
    Width = 121
    Height = 24
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 112
    Top = 93
    Width = 121
    Height = 24
    TabOrder = 3
  end
end
