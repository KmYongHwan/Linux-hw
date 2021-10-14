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
	{ 0xa033d651, "mcb_unregister_driver" },
	{ 0x3ed4e735, "__mcb_register_driver" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0x761acc93, "bgpio_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6128abbd, "mcb_request_mem" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0xedc03953, "iounmap" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb,gpio-generic");


MODULE_INFO(srcversion, "AA79B67B82951AE78E23048");
