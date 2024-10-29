
# react-native-condominium-grocery-sales

## Getting started

`$ npm install react-native-condominium-grocery-sales --save`

### Mostly automatic installation

`$ react-native link react-native-condominium-grocery-sales`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-condominium-grocery-sales` and add `RNCondominiumGrocerySales.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNCondominiumGrocerySales.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<     

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNCondominiumGrocerySalesPackage;` to the imports at the top of the file
  - Add `new RNCondominiumGrocerySalesPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-condominium-grocery-sales'
  	project(':react-native-condominium-grocery-sales').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-condominium-grocery-sales/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-condominium-grocery-sales')
  	```

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNCondominiumGrocerySales.sln` in `node_modules/react-native-condominium-grocery-sales/windows/RNCondominiumGrocerySales.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Condominium.Grocery.Sales.RNCondominiumGrocerySales;` to the usings at the top of the file
  - Add `new RNCondominiumGrocerySalesPackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNCondominiumGrocerySales from 'react-native-condominium-grocery-sales';

// TODO: What to do with the module?
RNCondominiumGrocerySales;
```
  