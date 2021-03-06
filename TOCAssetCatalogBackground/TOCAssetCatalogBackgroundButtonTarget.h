//
//  TOCAssetCatalogBackgroundButtonTarget.h
//  TOCAssetCatalogBackground
//
//  Created by Tobias Conradi on 17.05.15.
//  Copyright (c) 2015 Tobias Conradi. Licensed under the MIT license.
//

#import <Cocoa/Cocoa.h>
typedef NS_ENUM(NSUInteger, TOCAssetCatalogBackgroundType) {
	TOCAssetCatalogBackgroundTypeLightBackground,
	TOCAssetCatalogBackgroundTypeDarkBackground
};
extern NSString *const TOCAssetCatalogBackgroundColorChangedNotification;
extern TOCAssetCatalogBackgroundType TOCAssetCatalogBackgroundCurrentBackgroundType;

@interface TOCAssetCatalogBackgroundButtonTarget : NSObject
@property (nonatomic, weak) NSScrollView *scrollView;
- (void)updateBackgroundColor;
- (void)segmentedControlChanged:(id)sender;
@end