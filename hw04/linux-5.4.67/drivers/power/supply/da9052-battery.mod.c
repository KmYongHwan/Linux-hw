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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x2ccb0581, "da9052_request_irq" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x948145aa, "da9052_adc_read_temp" },
	{ 0x4685145d, "da9052_adc_manual_read" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x25356cdb, "da9052_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DE0754C7AF476383EBB1740");
