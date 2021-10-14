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
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x502e851d, "devm_backlight_device_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x299a31fd, "devm_pwm_get" },
	{ 0x5654e6bf, "pwm_apply_state" },
	{ 0x96848186, "scnprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lp8550");
MODULE_ALIAS("i2c:lp8551");
MODULE_ALIAS("i2c:lp8552");
MODULE_ALIAS("i2c:lp8553");
MODULE_ALIAS("i2c:lp8555");
MODULE_ALIAS("i2c:lp8556");
MODULE_ALIAS("i2c:lp8557");
MODULE_ALIAS("of:N*T*Cti,lp8550");
MODULE_ALIAS("of:N*T*Cti,lp8550C*");
MODULE_ALIAS("of:N*T*Cti,lp8551");
MODULE_ALIAS("of:N*T*Cti,lp8551C*");
MODULE_ALIAS("of:N*T*Cti,lp8552");
MODULE_ALIAS("of:N*T*Cti,lp8552C*");
MODULE_ALIAS("of:N*T*Cti,lp8553");
MODULE_ALIAS("of:N*T*Cti,lp8553C*");
MODULE_ALIAS("of:N*T*Cti,lp8555");
MODULE_ALIAS("of:N*T*Cti,lp8555C*");
MODULE_ALIAS("of:N*T*Cti,lp8556");
MODULE_ALIAS("of:N*T*Cti,lp8556C*");
MODULE_ALIAS("of:N*T*Cti,lp8557");
MODULE_ALIAS("of:N*T*Cti,lp8557C*");

MODULE_INFO(srcversion, "534A0F85642DE539BB5A5D6");
