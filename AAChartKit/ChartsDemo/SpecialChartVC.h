//
//  SpecialChartVC.h
//  AAChartKit
//
//  Created by An An on 17/3/23.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,ENUM_SpecialChartVC_chartType) {
    ENUM_SpecialChartVC_chartTypePie=0,
    ENUM_SpecialChartVC_chartTypeBubble,
    ENUM_SpecialChartVC_chartTypeTreeMap,
};
@interface SpecialChartVC : UIViewController
@property(copy,nonatomic)NSString *receivedChartType;
@property(nonatomic,assign)NSInteger ENUM_SpecialChartVC_chartType;
@end
