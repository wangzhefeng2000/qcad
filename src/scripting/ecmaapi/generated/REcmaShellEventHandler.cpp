


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #include "REcmaShellEventHandler.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QScrollBar>
            
                #include <QUrl>
            
                #include <QWidget>
            
                #include <QPainter>
            
                #include <QMimeData>
            
                #include <QDragEnterEvent>
            
                #include "RDocumentInterface.h"
            
                #include "RGraphicsView.h"
            
                #include "RRulerQt.h"
            
                #include "RSnap.h"
            
                #include "RVector.h"
            
                #include "RTextLabel.h"
            
                #include "RSnapRestriction.h"
            
            
        // includes for base ecma wrapper classes
        

            #define QTSCRIPT_IS_GENERATED_FUNCTION(fun) ((fun.data().toUInt32() & 0xFFFF0000) == 0xBABE0000)
            #define QTSCRIPT_IS_FUNCTION_IN_CALL(fun) ((fun.data().toUInt32() & 0x0000F000) == 0x0000B000)

        
    // Destructor:
    REcmaShellEventHandler::~REcmaShellEventHandler() {}
        REventHandler* REcmaShellEventHandler::getSelf(const QString& fName, QScriptContext* context)
    
        {
            REventHandler* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<REventHandler >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("REventHandler.%1(): "
                        "This object is not a REventHandler").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellEventHandler* REcmaShellEventHandler::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          REventHandler* selfBase = getSelf(fName, context);
                REcmaShellEventHandler* self = dynamic_cast<REcmaShellEventHandler*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellEventHandler >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("REventHandler.%1(): "
                    "This object is not a REventHandler").arg(fName),
                    context);
            }

            return self;
            


        }
        
    
    
    // Constructors:
    
      REcmaShellEventHandler::REcmaShellEventHandler(
                QWidget * widget, RDocumentInterface * documentInterface
            ) : REventHandler(
                widget, documentInterface
                ) {
            }
        
    
    
      bool REcmaShellEventHandler::isUrl(
                const QString & urlString
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::isUrl", engine);
                QScriptValue _q_function = __qtscript_self.property("isUrl");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::isUrl";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        bool ret =
                        REventHandler::isUrl(
                            urlString
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::isUrl", engine);

                        
                            return ret;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    bool res;
                      
                          res = qscriptvalue_cast< 
                            bool
                          >(
                        
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QString &, copyable: true
        << qScriptValueFromValue(engine, 

        urlString
        )
      
                            )
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::isUrl", engine);

                    
                            return res;
                          
            }
        
    
    
      QList < QUrl > REcmaShellEventHandler::getUrlsFromMimeData(
                QMimeData * mimeData
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::getUrlsFromMimeData", engine);
                QScriptValue _q_function = __qtscript_self.property("getUrlsFromMimeData");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::getUrlsFromMimeData";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        QList < QUrl > ret =
                        REventHandler::getUrlsFromMimeData(
                            mimeData
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::getUrlsFromMimeData", engine);

                        
                            return ret;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    QList < QUrl > res;
                      
                          REcmaHelper::fromScriptValue(engine, 
                        
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QMimeData *, copyable: false
        << qScriptValueFromValue(engine, 

        mimeData
        )
      
                            )
                        
                      , res
                    
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::getUrlsFromMimeData", engine);

                    
                            return res;
                          
            }
        
    
    
      void REcmaShellEventHandler::drawInfoLabel(
                QPainter * painter, const RTextLabel & textLabel
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::drawInfoLabel", engine);
                QScriptValue _q_function = __qtscript_self.property("drawInfoLabel");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=2*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::drawInfoLabel";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        REventHandler::drawInfoLabel(
                            painter, textLabel
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::drawInfoLabel", engine);

                        
                            return;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QPainter *, copyable: false
        << qScriptValueFromValue(engine, 

        painter
        )
      



    // type: RTextLabel &, copyable: true
        << qScriptValueFromValue(engine, 

        
            // const reference argument - make a new object:
            new RTextLabel(textLabel)
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::drawInfoLabel", engine);

                    
            }
        
    
    
      void REcmaShellEventHandler::drawSnapLabel(
                QPainter * painter, const RVector & pos, const RVector & posRestriction, const QString & text
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::drawSnapLabel", engine);
                QScriptValue _q_function = __qtscript_self.property("drawSnapLabel");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=4*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::drawSnapLabel";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        REventHandler::drawSnapLabel(
                            painter, pos, posRestriction, text
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::drawSnapLabel", engine);

                        
                            return;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QPainter *, copyable: false
        << qScriptValueFromValue(engine, 

        painter
        )
      



    // type: RVector &, copyable: true
        << qScriptValueFromValue(engine, 

        
            // const reference argument - make a new object:
            new RVector(pos)
        )
      



    // type: RVector &, copyable: true
        << qScriptValueFromValue(engine, 

        
            // const reference argument - make a new object:
            new RVector(posRestriction)
        )
      



    // type: QString &, copyable: true
        << qScriptValueFromValue(engine, 

        text
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::drawSnapLabel", engine);

                    
            }
        
    
    
      void REcmaShellEventHandler::dragEnter(
                QDragEnterEvent * event
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::dragEnter", engine);
                QScriptValue _q_function = __qtscript_self.property("dragEnter");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::dragEnter";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        REventHandler::dragEnter(
                            event
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::dragEnter", engine);

                        
                            return;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QDragEnterEvent *, copyable: false
        << qScriptValueFromValue(engine, 

        event
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::dragEnter", engine);

                    
            }
        
    
    
      void REcmaShellEventHandler::updateTextLabel(
                QPainter * painter, const RTextLabel & textLabel
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::updateTextLabel", engine);
                QScriptValue _q_function = __qtscript_self.property("updateTextLabel");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=2*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::updateTextLabel";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        REventHandler::updateTextLabel(
                            painter, textLabel
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::updateTextLabel", engine);

                        
                            return;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QPainter *, copyable: false
        << qScriptValueFromValue(engine, 

        painter
        )
      



    // type: RTextLabel &, copyable: true
        << qScriptValueFromValue(engine, 

        
            // const reference argument - make a new object:
            new RTextLabel(textLabel)
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::updateTextLabel", engine);

                    
            }
        
    
    
      void REcmaShellEventHandler::updateSnapInfo(
                QPainter * painter, RSnap * snap, RSnapRestriction * restriction
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::updateSnapInfo", engine);
                QScriptValue _q_function = __qtscript_self.property("updateSnapInfo");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=3*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::updateSnapInfo";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        REventHandler::updateSnapInfo(
                            painter, snap, restriction
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::updateSnapInfo", engine);

                        
                            return;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QPainter *, copyable: false
        << qScriptValueFromValue(engine, 

        painter
        )
      



    // type: RSnap *, copyable: false
        << qScriptValueFromValue(engine, 

        snap
        )
      



    // type: RSnapRestriction *, copyable: false
        << qScriptValueFromValue(engine, 

        restriction
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::updateSnapInfo", engine);

                    
            }
        
    
    
      void REcmaShellEventHandler::viewportChanged(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::viewportChanged", engine);
                QScriptValue _q_function = __qtscript_self.property("viewportChanged");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::viewportChanged";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        REventHandler::viewportChanged(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::viewportChanged", engine);

                        
                            return;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::viewportChanged", engine);

                    
            }
        
    
    
      void REcmaShellEventHandler::horizontalScrolled(
                double pos
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::horizontalScrolled", engine);
                QScriptValue _q_function = __qtscript_self.property("horizontalScrolled");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::horizontalScrolled";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        REventHandler::horizontalScrolled(
                            pos
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::horizontalScrolled", engine);

                        
                            return;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: double, copyable: true
        << qScriptValueFromValue(engine, 

        pos
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::horizontalScrolled", engine);

                    
            }
        
    
    
      void REcmaShellEventHandler::verticalScrolled(
                double pos
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellEventHandler::verticalScrolled", engine);
                QScriptValue _q_function = __qtscript_self.property("verticalScrolled");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "REventHandler::verticalScrolled";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        REventHandler::verticalScrolled(
                            pos
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::verticalScrolled", engine);

                        
                            return;
                          
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: double, copyable: true
        << qScriptValueFromValue(engine, 

        pos
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellEventHandler::verticalScrolled", engine);

                    
            }
        
    
  

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	