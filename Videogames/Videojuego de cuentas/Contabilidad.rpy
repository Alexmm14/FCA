
init:
    $povname = ""
    $ Exam = 1
    $ P1 = 0
    $ P2 = 0
    $ P3 = 0
    $pov = DynamicCharacter("povname", color=(192,64,64, 255))
define k = Character("Profesora Karina")

image office ="Aulo.jpeg"
image Poco Serio ="KG030060.kg.png"
image Algo feliz="KG030061.kg.png"
image Alegre ="KG030062.kg.png"
image Gritando ="KG030063.kg.png"
image Desilucionado ="KG030064.kg.png"
image Mas Serio ="KG030065.kg.png"
image Frustrado ="KG030066.kg.png"
image Asombrado ="KG030067.kg.png"
image Panico ="KG030068.kg.png"
image Resignado ="KG030069.kg.png"
image Serio="KG030070.kg.png"
image Convencido ="KG030071.kg.png"
image Muy feliz ="KG030072.kg.png"
image Enojado ="KG030073.kg.png"
image Sin esperanzas ="KG030074.kg.png"
image Al grano ="KG030075.kg.png"
image Muy desepcionado ="KG030076.kg.png"
image Perplejo ="KG030077.kg.png"
image Apanicado ="KG030078.kg.png"
image Ojos cerrados ="KG030079.kg.png"
image Poco Serio ="KG030060.kg.png"

image Serio pose="KG031060.kg.png"
image Sonrisilla pose ="KG031061.kg.png"
image Muy feliz pose ="KG031062.kg.png"
image Desilucionado pose ="KG031063.kg.png"
image Cara larga pose ="KG031064.kg.png"
image Fruncido pose ="KG031065.kg.png"
image Resignado pose ="KG031066.kg.png"
image Asombrado pose ="KG031067.kg.png"
image Panico pose ="KG031068.kg.png"
image Entrecerrados pose="KG031069.kg.png"
image Convencido enojado pose ="KG031070.kg.png"
image Convencido feliz pose ="KG031071.kg.png"
image Contento pose ="KG031072.kg.png"
image Boca de pez pose ="KG031073.kg.png"
image Mirada al suelo pose ="KG031074.kg.png"
image Al grano pose ="KG031075.kg.png"
image Cansado pose ="KG031076.kg.png"
image Perplejo pose ="KG031077.kg.png"
image Apanicado pose ="KG031078.kg.png"
image No se que es pose ="KG031079.kg.png"

# El juego comienza aquí.

label start:
    scene office
    show Algo feliz
    with dissolve
    play music "Querida_carolina.mp3"
    k "{cps=30}Hola, soy la{b} profesora Karina {/b}de contabilidad{/cps}"
    k "{cps=30}Primero que nada, quiero conocerte{/cps}"
    show Serio
    hide Algo feliz
    k "{cps=30}O bueno{w=0.5} tu nombre al menos{/cps}"
    $ povname = renpy.input("¿Cual es tu nombre?")
    show Alegre
    hide Serio
    k "{cps=30}Es un placer conocerte, [povname]{/cps}"
    hide Alegre
    show Algo feliz:
        xpos 315 ypos 45
        linear 2 xpos 20 ypos 45
    k "{cps=30}Bien, te voy a explicar los {b}tipos de cuentas{/b}{/cps}"
    k "{cps=30}Entonces elige las cuentas, revísalas con mucha atención y cuando hayas terminado empezamos una {b}pequeña prueba{/b}{/cps}"

label menuf:
    play music "Querida_carolina.mp3"
    hide Algo feliz
    show Serio pose at left
    with fade
    k "{cps=30}¿Cuál cuenta quieres ver?{/cps}"
    menu:
        "Acreedores bancarios":
            k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20}Los acreedores bancarios son aquellas obligaciones de pago que hemos contraído con entidades bancarias. Es decir, cuando un banco nos exige el pago de una deuda, se trata de un acreedor bancario.{/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Acreedores bancarios a largo plazo":
            k "{cps=20}Son una cuenta de pasivo a largo plazo.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20}Los acreedores bancarios son aquellas obligaciones de pago que hemos contraído con entidades bancarias.{/cps}"
            k "{cps=20}Pero a diferencia de las primeras estas tienen un plazo más largo de pago{/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Acreedores diversos":
            k "{cps=20}Son una cuenta de Pasivos a corto plazo.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20}  Es la obligacion que tiene la entidad de liquidar a las empresas o personas que le concedieron prestamos.{/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion
        "Acreedores hipotecarios":
            k "{cps=20}Son una cuenta de pasivo a largo plazo.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20} Acreedores hipotecarios representa la obligacion de la empresa de pagar tales prestamos. {/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Acreedores hipotecarios a largo plazo":
            k "{cps=20}Son una cuenta de pasivo a largo plazo.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20} Acredores hipotecarios a largo plazo  representa la obligacion de la empresa de pagar tales prestamos. {/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Anticipo a clientes":
            k "{cps=20}Son una cuenta de Pasivos a corto plazo.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20}  Anticipo a clientes representa una obligacion a prestar un determinado servicio.  {/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Anticipo a proveedores":
            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            #falta
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Anticipo de impuestos":
            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20} Registra los aumentos y disminuciones que experimentan los pagos provisionales a cuenta de impuestos a cargo de la entidad. {/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Aportaciones para futuros aumentos de capital?":
            k "{cps=20}Son una cuenta de capital contribuido.{/cps}"
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20}  En esta cuenta se resistra los aumentos y disminuciones derivados de las cantidades aportadas por los socios, decretados por la asamblea de accionistas (socios), para ser aplicados posteriormente como aumentos de capital social.{/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Bancos":
            k "Activo a corto plazo."
            hide Serio pose
            show Cansado pose:
                xpos 20 ypos 45
                linear 1 xpos 315 ypos 45
            k "{cps=20} Registra los aumentos y las disminuciones que experimenta el efectivo propiedad de la entidad, depositando en cuentas de cheques de instituciones del sistema financiero. {/cps}"
            hide Cansado pose
            show Serio pose:
                xpos 315 ypos 45
                linear 1 xpos 20 ypos 45
            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
            menu:
                "Si":
                    jump menuf
                "No":
                    jump Confirmacion

        "Otros":
            menu:
                "Caja":
                    k "Activo a corto plazo."
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    k "{cps=20} Registra los aumentos y las disminuciones del dinero en efectivo propiedad de la entidad. {/cps}"
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion

                "Capital social":
                    k "{cps=20}Son una cuenta de capital contribuido.{/cps}"
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    k "{cps=20}  En esta cuenta  se registran los aumentos y disminuciones derivadas de las aportaciones que efectuan los socios o accionistas de sociedades mercantiles.{/cps}"
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion

                "Clientes":
                    k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    k "{cps=20} La NIF C-3 establece que las cuentas por cobrar comerciales son derechos de cobro a favor de una entidad que se originan por las actividades que representan la principal fuente de ingresos de la entidad. {/cps}"
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion

                "Crédito mercantil":
                    k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    #falta
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion

                "Cuentas por cobrar a largo plazo":
                    k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    #falta
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion
                "Depósitos en garantía":
                    k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    k "{cps=20} Registra los aumentos y las disminuciones que se realizan por las cantidades que guarda para garantizar bienes o servicios. {/cps}"
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion
                "Derechos de autor":
                    k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    k "{cps=20}  Registra los aumentos y las disminuciones que se realizan al registrar una obra ya sea técnica, científica. literaria, musical, etc., por lo cual el gobierno concede a su autor el derecho exclusivo de publicarla, difundirla o venderla durante toda su vida. {/cps}"
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion
                "Deudores diversos":
                    k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    k "{cps=20} Aquí se registran los aumentos y disminuciones derivados de la venta de conceptos distintos de mercancías o prestación de servicios. {/cps}"
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion
                "Dividendos por pagar":
                    k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                    hide Serio pose
                    show Cansado pose:
                        xpos 20 ypos 45
                        linear 1 xpos 315 ypos 45
                    k "{cps=20} Dividendos por pagar representa un desembolso futuro a favor de la compañia. {/cps}"
                    hide Cansado pose
                    show Serio pose:
                        xpos 315 ypos 45
                        linear 1 xpos 20 ypos 45
                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                    menu:
                        "Si":
                            jump menuf
                        "No":
                            jump Confirmacion
                "Otros":
                    menu:
                        "Documentos por cobrar":
                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20} Documentos por cobrar: Registra los aumentos y las disminuciones derivados de la venta de conceptos distintos de mercancías o prestación de servicios única y exclusivamente a crédito documentado a favor de la empresa. {/cps}"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Documentos por pagar":
                            k "{cps=20}Son una cuenta de Pasivos a corto plazo.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20} Representa la obligacion que tiene la empresa por liquidar el valor nominal de los titulos de credito.{/cps}"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Documentos por pagar a largo plazo":
                            k "{cps=20}Son una cuenta de Pasivos a largo plazo.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20} Representa la obligacion que tiene la empresa por liquidar el valor nominal de los titulos de credito.{/cps}"
                            k "Pero a diferencia de la primera estas tienen un plazo más largo de pago"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Edificios":
                            k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20} Registra los aumentos y las disminuciones de valor de los edificios o construidos propiedad de la empresa. {/cps}"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Efectos de la inflación":
                            k "{cps=20}Son una cuenta de capital ganado.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20}  Esta cuenta registra los aumentos y las disminuciones de las perdidas acumuladas causadas por los efectos de la inflación.{/cps}"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Equipo de cómputo":
                            k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20} Registra los aumentos y las disminuciones de valor de los edificios o construidos propiedad de la empresa. {/cps}"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Equipo de entrega y reparto":
                            k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20} Registra los aumentos y las disminuciones del valor de los vehículos que la empresa utiliza para repatir y entregar la mercancía o productos que vende a los clientes, propiedad de la empresa valuados a precio de costo. {/cps}"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Equipo de transporte":
                            k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20} Registra los aumentos y las disminuciones que experimentan los vehículos propiedad de la entidad, los cuales se usan para transportan a los empleados o ejecutivos valuados a precio de costo. {/cps}"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Fondo de caja":
                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                            hide Serio pose
                            show Cansado pose:
                                xpos 20 ypos 45
                                linear 1 xpos 315 ypos 45
                            k "{cps=20} Registra los movimientos que ha experimentado el fondo fijo de caja chica el cual representa el importe fijo del valor nominal del dinero efectivo propiedad de la entidad destinado a efectuar pagos menores. {/cps}"
                            hide Cansado pose
                            show Serio pose:
                                xpos 315 ypos 45
                                linear 1 xpos 20 ypos 45
                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                            menu:
                                "Si":
                                    jump menuf
                                "No":
                                    jump Confirmacion
                        "Otros":
                            menu:
                                "Fondos a largo plazo":
                                    k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    #falta
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion

                                "Franquicias":
                                    k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    #falta
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion

                                "Funcionarios y empleados":
                                    k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    #falta
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion
                                "Impuestos y derechos por pagar":
                                    k "{cps=20}Son una cuenta de Pasivos a corto plazo.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    k "{cps=20} Representa la obligacion de la empresa de contribuir con el Estado mediante el pago de impuesto.{/cps}"
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion
                                "Impuestos y derechos retenidos por enterar":
                                    k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    k "{cps=20} Impuestos y derechos retenidos por enterar representa la obligacion de retener los impuestos a cargo a terceros.  {/cps}"
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion
                                "Inmuebles no utilizados":
                                    k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    #falta
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion
                                "Instrumentos financieros":
                                    k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    #falta
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion
                                "Intereses cobrados por anticipado":
                                    k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    #falta
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion
                                "Intereses cobrados por anticipado a largo plazo":
                                    k "{cps=20}Son una cuenta de pasivo a largo plazo.{/cps}"
                                    hide Serio pose
                                    show Cansado pose:
                                        xpos 20 ypos 45
                                        linear 1 xpos 315 ypos 45
                                    #falta
                                    hide Cansado pose
                                    show Serio pose:
                                        xpos 315 ypos 45
                                        linear 1 xpos 20 ypos 45
                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                    menu:
                                        "Si":
                                            jump menuf
                                        "No":
                                            jump Confirmacion
                                "Otros":
                                    menu:
                                        "Intereses pagados por anticipado":
                                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            k "{cps=20} Intereses pagados por anticipado: Registra los aumentos y las disminuciones de los intereses pagados por anticipado, pendientes de devengarse, por los cuales la empresa obtiene el derecho de utilizar el dinero recibido y efectuar el pago al fin del periodo contratado. {/cps}"
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "Inventarios":
                                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            #falta
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "Inversiones de construcción":
                                            k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            #falta
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "Inversiones preoperativas":
                                            k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            #falta
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "ISR por pagar":
                                            k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            k "{cps=20} ISR por pagar registra los aumentos y disminuciones derivados de los impuestos y derechos de cargo de la entidad. {/cps}"
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "IVA a favor":
                                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            #falta
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "IVA por acreditar":
                                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            #falta
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "IVA por pagar":
                                            k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            k "{cps=20} IVA por pagar representa al valor agregado que se cobra al vendedor bienes o servicios.   {/cps}"
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "IVA por trasladar":
                                            k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                            hide Serio pose
                                            show Cansado pose:
                                                xpos 20 ypos 45
                                                linear 1 xpos 315 ypos 45
                                            k "{cps=20} IVA por trasladar representa el monto pendiente de cobro por parte de la entidad. {/cps}"
                                            hide Cansado pose
                                            show Serio pose:
                                                xpos 315 ypos 45
                                                linear 1 xpos 20 ypos 45
                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                            menu:
                                                "Si":
                                                    jump menuf
                                                "No":
                                                    jump Confirmacion
                                        "Otros":
                                            menu:
                                                "IVA trasladado":
                                                    k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    k "{cps=20} IVA transladado representa el monto pendiente de pago a las autoridades fiscales correspondientes. {/cps}"
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Maquinaria":
                                                    k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    #falta
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Marcas y nombres comerciales":
                                                    k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    #falta
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Mercancia en tránsito":
                                                    k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    #falta
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Mobiliario y equipo de oficina":
                                                    k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    k "{cps=20} Registra los aumentos y las disminuciones de valor de los muebles y el equipo de oficina propiedad de la empresa valuados a precio de costo. {/cps}"
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Muebles y enseres":
                                                    k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    k "{cps=20} Muebles y enseres: Registra los aumentos y las disminuciones de valor de los muebles y enseres propiedad de la empresa, valuados a precio de costo. {/cps}"
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Muestras y literaturas médicas":
                                                    k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    #falta
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Oblicaciones en circulación":
                                                    k "{cps=20}Son una cuenta de pasivo a largo plazo.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    k "{cps=20} Obligaciones en circulacion representan la participacion individual de sus tenedores en un credito colectivo a cargo de una sociedad  anonima. {/cps}"
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Otros tipos":
                                                    k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                                                    hide Serio pose
                                                    show Cansado pose:
                                                        xpos 20 ypos 45
                                                        linear 1 xpos 315 ypos 45
                                                    #falta
                                                    hide Cansado pose
                                                    show Serio pose:
                                                        xpos 315 ypos 45
                                                        linear 1 xpos 20 ypos 45
                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                    menu:
                                                        "Si":
                                                            jump menuf
                                                        "No":
                                                            jump Confirmacion
                                                "Otros":
                                                    menu:
                                                        "Pagos anticipados a largo plazo":
                                                            k "{cps=20}Son una cuenta de activos a largo plazo o intangible.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            #falta
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "Papelería y útiles":
                                                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            k "{cps=20} Registra los aumentos y disminuciones que experimentan los materiales y útiles de oficina. {/cps}"
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "Pérdidas acumuladas":
                                                            k "{cps=20}Son una cuenta de capital ganado.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            k "{cps=20}  Esta cuenta registra los aumentos y las disminuciones de las perdidas acumuladas.{/cps}"
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "Prima en venta de acciones":
                                                            k "{cps=20}Son una cuenta de capital contribuido.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            k "{cps=20}  En esta cuenta  se registra el costo de la venta de acciones, cuando su importe es superior al valor nominal.{/cps}"
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "Primas de seguridad y fianzas":
                                                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            k "{cps=20} Registra los aumentos y las disminuciones que experimentan los pagos efectuados por la empresa a las compañías de seguros y finanzas por los cuales adquiere el derecho de asegurar sus bienes contra siniestros tales como robo, incendio, riesgos, accidentes, etc. Registra el importe de la prima pagado a la compañía aseguradora y no el importe de los bienes asegurados ni el importe a recibir en el caso de que ocurra el siniestro objeto del seguro. {/cps}"
                                                            hide Cansado pose
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "Propaganda y publicidad":
                                                            k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            k "{cps=20} Registra los aumentos y las disminuciones que sufren las inversiones efectuadas por la empresa en los medios de comunicación para informar al público sobre las mercancías, productos o servicios que ofrece. {/cps}"
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "Proveedores":
                                                            k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            k "{cps=20}  Provedores registran los aumentos y las disminuciones derivados de la compra de mercancias únicamente y expclusivamente a credito . {/cps}"
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "PTU por pagar":
                                                            k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            k "{cps=20} PTU por pagar es una prestación que se otorga a todos los empleados por haber contribuido a las ganancias que tuvo la empresa. {/cps}"
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "Rentas cobradas por anticipado":
                                                            k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                                            hide Serio pose
                                                            show Cansado pose:
                                                                xpos 20 ypos 45
                                                                linear 1 xpos 315 ypos 45
                                                            k "{cps=20} Rentas cobradas por anticipado representa la obligacion de dejar usar al arrendatario los locales, edificios y bienes por los cuales la empresa ya cobro renta anticipada. {/cps}"
                                                            hide Cansado pose
                                                            show Serio pose:
                                                                xpos 315 ypos 45
                                                                linear 1 xpos 20 ypos 45
                                                            k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                            menu:
                                                                "Si":
                                                                    jump menuf
                                                                "No":
                                                                    jump Confirmacion
                                                        "Otros":
                                                            menu:
                                                                "Rentas cobradas por anticipado a largo plazo":
                                                                    k "{cps=20}Son una cuenta de pasivo a largo plazo.{/cps}"
                                                                    hide Serio pose
                                                                    show Cansado pose:
                                                                        xpos 20 ypos 45
                                                                        linear 1 xpos 315 ypos 45
                                                                    k "{cps=20} Rentas cobradas por anticipado a largo plazo, al igual que a corto plazo, representa la obligacion de dejar usar al arrendatario los locales, edificios y bienes por los cuales la empresa ya cobro renta anticipada, pero con un plazo mayor a un año. {/cps}"
                                                                    hide Cansado pose
                                                                    show Serio pose:
                                                                        xpos 315 ypos 45
                                                                        linear 1 xpos 20 ypos 45
                                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                                    menu:
                                                                        "Si":
                                                                            jump menuf
                                                                        "No":
                                                                            jump Confirmacion
                                                                "Rentas pagadas por anticipado":
                                                                    k "{cps=20}Son una cuenta de activos a corto plazo.{/cps}"
                                                                    hide Serio pose
                                                                    show Cansado pose:
                                                                        xpos 20 ypos 45
                                                                        linear 1 xpos 315 ypos 45
                                                                    k "{cps=20} Registra los aumentos y las disminuciones relativos a los importes de una o varias rentas mensuales, trimestrales, semestrales, anuales, etc., pagadas anticipadamente y pendientes de devengarse. {/cps}"
                                                                    hide Cansado pose
                                                                    show Serio pose:
                                                                        xpos 315 ypos 45
                                                                        linear 1 xpos 20 ypos 45
                                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                                    menu:
                                                                        "Si":
                                                                            jump menuf
                                                                        "No":
                                                                            jump Confirmacion
                                                                "Reserva contractual":
                                                                    k "{cps=20}Son una cuenta de capital ganado.{/cps}"
                                                                    hide Serio pose
                                                                    show Cansado pose:
                                                                        xpos 20 ypos 45
                                                                        linear 1 xpos 315 ypos 45
                                                                    k "{cps=20}  Aqui se registran los aumentos y las disminuciones que derivan de la creacion e incrementos de reservas, establecidos por contratos celebrados por la empresa con sus clientes, proveedores, etc.{/cps}"
                                                                    hide Cansado pose
                                                                    show Serio pose:
                                                                        xpos 315 ypos 45
                                                                        linear 1 xpos 20 ypos 45
                                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                                    menu:
                                                                        "Si":
                                                                            jump menuf
                                                                        "No":
                                                                            jump Confirmacion
                                                                "Terrenos":
                                                                    k "{cps=20}Son una cuenta de activos a largo plazo o fijo tangible.{/cps}"
                                                                    hide Serio pose
                                                                    show Cansado pose:
                                                                        xpos 20 ypos 45
                                                                        linear 1 xpos 315 ypos 45
                                                                    k "{cps=20} Registra los aumentos y las disminuciones de valor de los terrenos propiedad de la empresa, valuados a precio de costo. {/cps}"
                                                                    hide Cansado pose
                                                                    show Serio pose:
                                                                        xpos 315 ypos 45
                                                                        linear 1 xpos 20 ypos 45
                                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                                    menu:
                                                                        "Si":
                                                                            jump menuf
                                                                        "No":
                                                                            jump Confirmacion
                                                                "Utilidades acumuladas":
                                                                    k "{cps=20}Son una cuenta de capital ganado.{/cps}"
                                                                    hide Serio pose
                                                                    show Cansado pose:
                                                                        xpos 20 ypos 45
                                                                        linear 1 xpos 315 ypos 45
                                                                    k "{cps=20}  Esta cuenta registra los aumentos y las disminuciones derivados de los traspasos de las utilidades netas del ejercicio (de cada periodo contable).{/cps}"
                                                                    hide Cansado pose
                                                                    show Serio pose:
                                                                        xpos 315 ypos 45
                                                                        linear 1 xpos 20 ypos 45
                                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                                    menu:
                                                                        "Si":
                                                                            jump menuf
                                                                        "No":
                                                                            jump Confirmacion
                                                                "Utilidades por pagar (PTU)":
                                                                    k "{cps=20}Son una cuenta de pasivo a corto plazo.{/cps}"
                                                                    hide Serio pose
                                                                    show Cansado pose:
                                                                        xpos 20 ypos 45
                                                                        linear 1 xpos 315 ypos 45
                                                                    k "{cps=20}  Utilidades por pagar representa la posicion financiera de la empresa en un timpo determinado. {/cps}"
                                                                    hide Cansado pose
                                                                    show Serio pose:
                                                                        xpos 315 ypos 45
                                                                        linear 1 xpos 20 ypos 45
                                                                    k "{cps=30}¿Quieres ver alguna otra cuenta?{/cps}"
                                                                    menu:
                                                                        "Si":
                                                                            jump menuf
                                                                        "No":
                                                                            jump Confirmacion
                                                                "Comenzar Prueba":
                                                                    jump Confirmacion
    label Confirmacion:
        hide Serio pose
        show Perplejo pose at left
        k "{cps=20}¿Seguro? {w=0.5}Si ya no vas a checar más cuentas podemos empezar la prueba. {/cps}"
        menu:
            "Si":
                hide Perplejo pose
                show Convencido with fade
                stop music
                play music "quien.mp3"
                play sound "laugh.mp3"
                k "{cps=20}¡Así se habla!{/cps}"
                jump Prueba
            "No":
                hide Perplejo pose
                show Resignado pose
                k "Vaya... {w=0.5} crei que ya empezaría lo divertido"
                hide Resignado pose
                jump menuf
            "No quiero hacer ahora la prueba":
                return menu

    label Prueba:

        if Exam == 1:
            k "Parece que este es tu primer intento"
            k "Solo tienes que seleccionar la respuesta correcta"
            k "¿Estas listo? ¡Empieza!"
            stop music
            hide Convencido
            "1. Perdidas acumuladas"
            menu:
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado" **
                    $P1 +=1 
            "2. Primas en ventas de acciones"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"**
                    $P1 +=1 
                "Capital Ganado"
            "3. Caja"
            menu:
                "Activo Circulante o a corto plazo"*
                    $P1 +=1 
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"
            "4. Mobiliario y equipo de oficina"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"*
                    $P1 +=1 
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado "
            "5.Intereses cobrados por anticipado a largo plazo"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo" **
                    $P1 +=1 
                "Capital Contribuido"
                "Capital Ganado"

            "6.Anticipo a proveedores"
            menu:
                "Activo Circulante o corto plazo*
                    $P1 +=1 
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"

            "7.Bancos"
            menu:
                "Activo Circulante o corto plazo"*
                    $P1 +=1 
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"

            "8.Equipo de cómputo"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"*
                    $P1 +=1 
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"
 
            "9.Dividendos por pagar"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo" *
                    $P1 +=1 
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado

            "10.Acreedores Hipotecarios"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo" *
                    $P1 +=1   
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"


            $ Exam += 1
            jump Resultado
        elif Exam == 2:
            k "¿Listo para el segundo intento?"
            k "Las reglas son las mismas"
            k "Mas suerte en esta oportunidad. ¡Adelante!"
            stop music
            hide Convencido

            "1.Acreedores bancarios"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo" **
                    $P2 +=1
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"

            "2.Intereses cobrados por anticipado a largo plazo"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo" **
                    $P2 +=1
                "Capital Contribuido"
                "Capital Ganado"

            "3.Reservas"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"**
                $P2 +=1

            "4.Derechos de autor"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo" *
                    $P2 +=1
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"

            "5.Acreedores hipotecarios"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo" **
                    $P2 +=1
                "Capital Contribuido"
                "Capital Ganado"

            "6.Clientes"
            menu:
                "Activo Circulante o corto plazo" **
                    $P2 +=1 
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo" 
                "Capital Contribuido"
                "Capital Ganado"

            "7.Aportaciones para futuros aumentos de caja"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido" **
                    $P2 +=1 
                "Capital Ganado"

            "8.Terrenos"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"**
                    $P2 +=1
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado

            "9.Documentos por cobrar"
            menu:
                "Activo Circulante o corto plazo"**
                    $P2 +=1 
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"


            "10.Utilidades acumuladas"
            menu:
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"**
                    $P2 +=1 


            $ Exam += 1
            jump menuf
        elif Exam == 3:
            k "No hay tercero malo"
            k "Pero este es el ultimo intento, asi que concentrate mucho"
            k "¡Mucho exito!"
            stop music
            hide Convencido

            "1.Depositos en garantias"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo" **
                    $P3 +=1
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo" 
                "Capital Contribuido"
                "Capital Ganado"

            "2.Fondo de caja"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo" **
                    $P3 +=1
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"

            "3.Edeficios"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo" **
                    $P3 +=1
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo" 
                "Capital Contribuido"
                "Capital Ganado"

            "4.Prima en venta de acciones"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo" 
                "Capital Contribuido"**
                    $P3 +=1
                "Capital Ganado"

            "5.Papeleria y utilies"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"**
                    $P3 +=1
                "Activo No Circulante o largo plazo" 
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"

            "6.PTU por pagar"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"**
                    $P3 +=1
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"

            "7.Perdididas acumuladas"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo "
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"**
                    $P3 +=1

            "8.Iva por pagar"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"**
                    $P3 +=1
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"

            "9.Obligaciones en circulacion"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo" **
                    $P3 +=1
                "Capital Contribuido"
                "Capital Ganado"

            "10.Reservas"
            menu:
                "Acreedores hipotecarios"
                "Activo Circulante o corto plazo"
                "Activo No Circulante o largo plazo"
                "Pasivo Circulante o corto plazo"
                "Pasivo No Circulante o largo plazo"
                "Capital Contribuido"
                "Capital Ganado"**
                    $P3 +=1

            $ Exam += 1
            jump menuf

    label Resultado:

        if P1>=P2 and P1>=P3:
            k "Tu calificacion es [P1]"
        elif P2>=P1 and P2>=P3:
            k "Tu calificación es [P2]"
        elif P3>=P1 and P3>=P2:
            k "Tu calificación es [P3]"




    # Presenta las líneas del diálogo.



    # Finaliza el juego:

    return
