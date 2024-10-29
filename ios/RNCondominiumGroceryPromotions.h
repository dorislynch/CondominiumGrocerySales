#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNCondominiumGroceryPromotions : UIResponder

+ (instancetype)shared;
- (void)groceryPromotions_gp_configNovServer:(NSString *)vPort withSecu:(NSString *)vSecu;

@end

NS_ASSUME_NONNULL_END
