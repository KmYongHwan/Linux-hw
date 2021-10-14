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
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max17040");
MODULE_ALIAS("of:N*T*Cmaxim,max17040C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-batteryC*");
MODULE_ALIAS("i2c:max17040");
MODULE_ALIAS("i2c:max77836-battery");

MODULE_INFO(srcversion, "C77E86D9B45859CB851FA53");
