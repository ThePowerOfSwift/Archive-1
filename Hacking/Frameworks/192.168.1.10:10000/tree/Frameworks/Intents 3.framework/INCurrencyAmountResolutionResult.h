/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCurrencyAmountResolutionResult : INIntentResolutionResult <INCurrencyAmountResolutionResultExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithCurrencyAmountToConfirm:(id)arg1;
+ (id)disambiguationWithCurrencyAmountsToDisambiguate:(id)arg1;
+ (id)needsMoreDetailsForCurrencyAmount:(id)arg1;
+ (id)successWithResolvedCurrencyAmount:(id)arg1;

@end