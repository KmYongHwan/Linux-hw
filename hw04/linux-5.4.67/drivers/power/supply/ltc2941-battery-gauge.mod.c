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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5aeff885, "i2c_smbus_write_i2c_block_data" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clltc,ltc2941");
MODULE_ALIAS("of:N*T*Clltc,ltc2941C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2942");
MODULE_ALIAS("of:N*T*Clltc,ltc2942C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2943");
MODULE_ALIAS("of:N*T*Clltc,ltc2943C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2944");
MODULE_ALIAS("of:N*T*Clltc,ltc2944C*");
MODULE_ALIAS("i2c:ltc2941");
MODULE_ALIAS("i2c:ltc2942");
MODULE_ALIAS("i2c:ltc2943");
MODULE_ALIAS("i2c:ltc2944");

MODULE_INFO(srcversion, "FAB389826555BF0CBF970F0");
