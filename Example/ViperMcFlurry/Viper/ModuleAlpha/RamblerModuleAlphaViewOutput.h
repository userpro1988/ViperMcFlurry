//
//  RamblerModuleAlphaViewOutput.h
//  Проект:   ViperMcFlurry
//
//  Модуль:   RamblerModuleAlpha
//  Описание: Первый модуль-пример для Viper IntermoduleDataTransfer
//
//  Создан Andrey Zarembo-Godzyatsky  10/08/15
//  Egor Tolstoy 2015
//

#import <Foundation/Foundation.h>

@protocol RamblerModuleAlphaViewOutput <NSObject>

- (void)setupView;
- (void)sendDataButtonClicked;
- (void)embedModuleButtonClicked;
- (void)instantiateBetaButtonClicked;
- (void)instantiateAndEmbedBetaButtonClicked;

@end
