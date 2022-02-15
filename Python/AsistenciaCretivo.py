from selenium import webdriver
import pyautogui as pa
import time
Bandera = False


PATH= "C:/Program Files (x86)/chromedriver.exe"

driver = webdriver.Chrome(PATH)
driver.maximize_window()

'''Ingresar a la plataforma'''
driver.get("https://informatica.fca.unam.mx/mod/attendance/view.php?id=11815")
driver.minimize_window()
NumC= driver.find_element_by_id("username")
clave= driver.find_element_by_id("password")
NumC.send_keys("")
clave.send_keys("")
boton = driver.find_element_by_class_name("btn-primary")
boton.click()

'''Enviar asistencia'''
clase= driver.find_element_by_link_text("Enviar asistencia")
clase.click()
presente = driver.find_element_by_class_name("statusdesc")
presente.click()
continuar= driver.find_element_by_id("id_submitbutton")
continuar.click()
time.sleep(5)
driver.close()