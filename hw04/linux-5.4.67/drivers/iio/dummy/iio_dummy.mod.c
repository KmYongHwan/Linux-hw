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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9084df2f, "iio_register_sw_device_type" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x88565c16, "iio_unregister_sw_device_type" },
	{ 0x1351965, "iio_device_free" },
	{ 0xd17973a6, "iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "industrialio-sw-device,industrialio");


MODULE_INFO(srcversion, "69E0F98A94824334EEA477A");
