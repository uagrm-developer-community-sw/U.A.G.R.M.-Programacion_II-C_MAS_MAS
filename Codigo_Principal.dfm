object UCFormulario: TUCFormulario
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'FORMULARIO PRINCIPAL'
  ClientHeight = 459
  ClientWidth = 754
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object LbEntrada: TLabel
    Left = 56
    Top = 375
    Width = 116
    Height = 29
    Alignment = taCenter
    Caption = 'ENTRADA'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object LbSalida: TLabel
    Left = 568
    Top = 375
    Width = 91
    Height = 29
    Alignment = taCenter
    Caption = 'SALIDA'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lbAuxiliar: TLabel
    Left = 328
    Top = 385
    Width = 72
    Height = 19
    Caption = 'AUXILIAR'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object PMenu: TPanel
    Left = 0
    Top = 0
    Width = 754
    Height = 333
    Align = alTop
    TabOrder = 0
    object PCMenu: TPageControl
      Left = 1
      Top = 1
      Width = 752
      Height = 332
      ActivePage = Numeros
      Align = alTop
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      object Numeros: TTabSheet
        Caption = 'Numeros'
        object BtGrpNumeros: TButtonGroup
          Left = 0
          Top = 0
          Width = 744
          Height = 330
          Align = alTop
          ButtonHeight = 50
          ButtonWidth = 50
          ButtonOptions = [gboFullSize, gboShowCaptions]
          Items = <
            item
              Caption = 'PROGRAMA QUE MUESTRA LOS PRIMEROS N NUMEROS NATURALES'
              OnClick = BtGrpNumerosItems0Click
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA LOS PRIMEROS N NUMEROS NATURALES INVERTIDOS'
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA LOS PRIMEROS N NUMEROS PARES'
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA LOS PRIMEROS N NUMEROS IMPARES'
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA LA SUMA DE LOS DIGITOS PARES DE UN NUMERO'
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA LA SUMA DE LOS DIGITOS IMPARES DE UN NUMERO'
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA LA CANTIDAD DE DIGITOS PARES DE UN NUMERO'
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA LA CANTIDAD DE DIGITOS IMPARES DE UN NUMERO'
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA EL MENOR DIGITO DE UN NUMERO'
            end
            item
              Caption = 'PROGRAMA QUE MUESTRA EL MAYOR DIGITO DE UN NUMERO'
            end
            item
              Caption = 'PROGRAMA QUE ELIMINA LOS DIGITOS PARES DE UN NUMERO'
            end
            item
              Caption = 'PROGRAMA QUE ELIMINA LOS DIGITOS IMPARES DE UN NUMERO'
            end>
          TabOrder = 0
        end
      end
      object Cadenas: TTabSheet
        Caption = 'Cadenas'
        ImageIndex = 1
        object BtGrpCadenas: TButtonGroup
          Left = 0
          Top = 0
          Width = 744
          Height = 330
          Align = alTop
          ButtonHeight = 50
          ButtonWidth = 50
          ButtonOptions = [gboFullSize, gboShowCaptions]
          Items = <
            item
              Caption = 'Suma de digitos'
            end
            item
              Caption = 'Contar digitos pares'
            end
            item
              Caption = 'Suma de digitos primos'
            end
            item
            end
            item
            end
            item
            end
            item
            end
            item
            end>
          TabOrder = 0
        end
      end
      object Vectores: TTabSheet
        Caption = 'Vectores'
        ImageIndex = 2
        object BtGrpVectores: TButtonGroup
          Left = 0
          Top = 0
          Width = 744
          Height = 161
          Align = alTop
          ButtonHeight = 30
          ButtonWidth = 50
          ButtonOptions = [gboFullSize, gboShowCaptions]
          Items = <
            item
              Caption = 'Suma de digitos'
            end
            item
              Caption = 'Contar digitos pares'
            end
            item
              Caption = 'Suma de digitos primos'
            end
            item
            end
            item
            end
            item
            end
            item
            end>
          TabOrder = 0
        end
        object StringGrid1: TStringGrid
          Left = 0
          Top = 236
          Width = 744
          Height = 65
          Align = alBottom
          ColCount = 1
          DefaultColWidth = 80
          DefaultRowHeight = 40
          FixedCols = 0
          RowCount = 1
          FixedRows = 0
          TabOrder = 1
        end
        object Button2: TButton
          Left = 3
          Top = 167
          Width = 107
          Height = 32
          Caption = 'Redimensionar'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 2
        end
        object txtVColumnas: TEdit
          Left = 119
          Top = 167
          Width = 79
          Height = 31
          Alignment = taCenter
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -19
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 3
        end
      end
      object Matrices: TTabSheet
        Caption = 'Matrices'
        ImageIndex = 3
        object Label4: TLabel
          Left = 528
          Top = 198
          Width = 36
          Height = 18
          Alignment = taCenter
          Caption = 'Filas'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Label5: TLabel
          Left = 528
          Top = 229
          Width = 72
          Height = 18
          Caption = 'Columnas'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object ButtonGroup5: TButtonGroup
          Left = 0
          Top = 0
          Width = 511
          Height = 301
          Align = alLeft
          ButtonHeight = 50
          ButtonWidth = 50
          ButtonOptions = [gboFullSize, gboShowCaptions]
          Items = <
            item
              Caption = 'Mostrar elementos random iterativo'
            end
            item
              Caption = 'Cargar vector horizonal de izquierda a derecha'
            end
            item
              Caption = 'Cargar vector horizonal de derecha a izquierda'
            end
            item
              Caption = 'Cargar vector verticalmente de arriba a abajo'
            end
            item
              Caption = 'Cargar vector verticalmente de abajo a arriba'
            end
            item
              Caption = 'Cargar serie izquierda a derecha con inicio arriba izquierda'
            end
            item
              Caption = 'Cargar serie de derecha a izquierda con inicio arriba derecha'
            end
            item
              Caption = 'Cargar serie de izquierda a derecha con inicio abajo izquierda'
            end
            item
              Caption = 'Cargar serie de derecha a izquierda con inicio abajo derecha'
            end
            item
              Caption = 'Cargar serie de arriba a abajo con inicio arriba izquierda'
            end
            item
              Caption = 'Cargar serie de arriba a abajo con inicio arriba derecha'
            end
            item
              Caption = 'Cargar serie de abajo a arriba con inicio abajo izquierda'
            end
            item
              Caption = 'Cargar serie de abajo a arriba con inicio abajo derecha'
            end
            item
              Caption = 
                'Cargar diagonal superior izquierda de izquierda a derecha con in' +
                'icio arriba izquierda'
            end
            item
              Caption = 
                'Cargar diagonal superior derecha  de derecha a izquierda con ini' +
                'cio arriba derecha'
            end
            item
              Caption = 'Serpiente izq a der y der a izq con inicio abajo derecha'
            end
            item
              Caption = 
                'Serpiente izq a der y der a izq en diagonal superior izquierda c' +
                'on inicio abajo izquierda'
            end
            item
              Caption = 
                'Cargar diagonal inferior izquierda de arriba a abajo con inicio ' +
                'arriba izquierda '
            end
            item
              Caption = 
                'Cargar diagonal inferior derecha de derecha a izquierda con inic' +
                'io arriba derecha'
            end
            item
              Caption = 
                'Cargar diagonal inferior derecha de izquierda a derecha con inic' +
                'io arriba derecha '
            end
            item
              Caption = 
                'Cargar diagonal superior izquierda de arriba a abajo con inicio ' +
                'arriba izquierda'
            end
            item
              Caption = 'Serpiente izq a der y der a izq con inicio arriba izquierda'
            end
            item
              Caption = 
                'Cargar triangular combinada sup der con sup izq de derecha a izq' +
                'uierda con inicio arriba derecha'
            end>
          TabOrder = 0
        end
        object SGMatriz: TStringGrid
          Left = 517
          Top = 6
          Width = 218
          Height = 186
          ColCount = 6
          DefaultColWidth = 25
          DefaultRowHeight = 20
          DrawingStyle = gdsClassic
          FixedCols = 0
          RowCount = 6
          FixedRows = 0
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goTabs]
          ParentFont = False
          ScrollBars = ssNone
          TabOrder = 1
        end
        object txtMFilas: TEdit
          Left = 606
          Top = 198
          Width = 38
          Height = 24
          Alignment = taCenter
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 2
        end
        object txtMColumnas: TEdit
          Left = 606
          Top = 228
          Width = 38
          Height = 24
          Alignment = taCenter
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 3
        end
        object Button3: TButton
          Left = 672
          Top = 198
          Width = 69
          Height = 49
          Caption = 'LIMPIAR'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 4
        end
        object Button1: TButton
          Left = 517
          Top = 258
          Width = 207
          Height = 28
          Caption = 'REDIMENSIONAR'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 5
        end
      end
      object Ejemplos: TTabSheet
        Caption = 'Ejemplos'
        ImageIndex = 4
        object BtGrpEjemplo: TButtonGroup
          Left = 0
          Top = 0
          Width = 744
          Height = 305
          Align = alTop
          ButtonHeight = 50
          ButtonWidth = 50
          ButtonOptions = [gboFullSize, gboShowCaptions]
          Items = <
            item
              Caption = 'InpuBox'
              OnClick = BtGrpEjemploItems0Click
            end
            item
              Caption = 'ShowMessage'
              OnClick = BtGrpEjemploItems1Click
            end
            item
              Caption = 'Valor vs Referencia en Numero recursivo'
            end
            item
              Caption = 'Valor vs Referencia'
            end
            item
              Caption = 'Valor vs Referencia en Numero recursivo'
            end
            item
              Caption = 'isdigit'
            end
            item
              Caption = 'isalpha'
            end
            item
              Caption = 'islower'
            end
            item
              Caption = 'isupper'
            end
            item
              Caption = 'tolower'
            end
            item
              Caption = 'toupper'
            end
            item
              Caption = 'IsEmpty'
            end
            item
              Caption = 'Length'
            end
            item
              Caption = 'TrimLeft'
            end
            item
              Caption = 'TrimRight'
            end
            item
              Caption = 'Trim'
            end
            item
              Caption = 'UpperCase'
            end
            item
              Caption = 'LowerCase'
            end
            item
              Caption = 'Delete'
            end
            item
              Caption = 'SubString'
            end
            item
              Caption = 'Pos'
            end
            item
              Caption = 'LastDelimiter'
            end
            item
              Caption = 'isalnum'
            end
            item
              Caption = 'ispunct'
            end
            item
              Caption = 'isspace'
            end
            item
              Caption = 'Delete'
            end
            item
              Caption = 'SubString'
            end
            item
              Caption = 'Pos'
            end
            item
              Caption = 'LastDelimiter'
            end>
          TabOrder = 0
        end
      end
    end
  end
  object txtEntrada: TEdit
    Left = 14
    Top = 410
    Width = 241
    Height = 33
    Alignment = taCenter
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object txtSalida: TEdit
    Left = 497
    Top = 410
    Width = 241
    Height = 33
    Alignment = taCenter
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object btnCargar: TButton
    Left = 304
    Top = 339
    Width = 130
    Height = 40
    Caption = 'CARGAR'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object txtAuxiliar: TEdit
    Left = 304
    Top = 410
    Width = 130
    Height = 33
    Alignment = taCenter
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
  end
end
