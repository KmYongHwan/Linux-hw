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
	{ 0xf9a482f9, "msleep" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xc9e9e2e9, "slim_driver_unregister" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x70e5cfc2, "__slim_driver_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,slimbus");


MODULE_INFO(srcversion, "2DFA787153CBD3BC8D78D85");
