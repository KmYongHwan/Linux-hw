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
	{ 0x424a6285, "pcf50633_reg_write" },
	{ 0x56c5eba8, "pcf50633_reg_set_bit_mask" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2f246964, "pcf50633_free_irq" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc6983a99, "pcf50633_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xf58ff891, "pcf50633_register_irq" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x186a58a0, "pcf50633_reg_clear_bits" },
};

MODULE_INFO(depends, "pcf50633");


MODULE_INFO(srcversion, "070845CBE8FD6E0B735CA36");
