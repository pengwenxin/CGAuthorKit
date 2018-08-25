//
//  CTMediator+Special.h
//  Pods
//
//  Created by kepuna on 2017/9/13.
//
//

#import <UIKit/UIKit.h>
#import <CTMediator/CTMediator.h>
#import <TTAPIsKit/APIRequest.h>
#import <TTAPIsKit/FFReformProtocol.h>

@interface CTMediator (Special)

- (UIViewController *)specialDetailController;
- (NSDictionary *)specialReformerWithOriginData:(NSDictionary *)data;
- (NSDictionary<FFReformProtocol> *)specialReformer;
- (APIRequest *)specialAPIRequest;

@end
