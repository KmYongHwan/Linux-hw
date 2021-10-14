#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xa86d5b90, "input_unregister_handler" },
	{ 0xcfad6a55, "input_register_handler" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x4537b65d, "input_open_device" },
	{ 0xccb201a5, "input_register_handle" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x23ee55bf, "input_inject_event" },
	{ 0xc95ae1ab, "input_unregister_handle" },
	{ 0x21fca503, "input_close_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*11,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "88B38FB779492C9AEC9736A");
