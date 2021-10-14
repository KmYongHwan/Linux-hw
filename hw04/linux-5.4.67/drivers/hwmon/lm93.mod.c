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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0xf9a482f9, "msleep" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x756785cc, "i2c_smbus_read_block_data" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("i2c:lm93");
MODULE_ALIAS("i2c:lm94");

MODULE_INFO(srcversion, "F560B6009CC9FD388DE953E");
