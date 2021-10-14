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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2834c78e, "devres_open_group" },
	{ 0x4f3ba215, "__nd_driver_register" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcb16146a, "__dax_pmem_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x75a95bfc, "dev_dax_probe" },
	{ 0x82d331cf, "devres_close_group" },
	{ 0x8742c6dd, "devres_release_group" },
};

MODULE_INFO(depends, "dax_pmem_core,device_dax");


MODULE_INFO(srcversion, "124D074B39DCB6C8358F475");
