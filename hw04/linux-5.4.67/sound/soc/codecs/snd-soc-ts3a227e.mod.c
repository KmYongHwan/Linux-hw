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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x7bd09e71, "snd_jack_set_key" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x635e47bb, "snd_soc_jack_report" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd,snd-soc-core");

MODULE_ALIAS("of:N*T*Cti,ts3a227e");
MODULE_ALIAS("of:N*T*Cti,ts3a227eC*");
MODULE_ALIAS("i2c:ts3a227e");
MODULE_ALIAS("acpi*:104C227E:*");

MODULE_INFO(srcversion, "691DDB98EB8C7A72BC32454");
