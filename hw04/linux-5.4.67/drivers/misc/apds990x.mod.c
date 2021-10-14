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
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x521d5d13, "regulator_bulk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xff426c78, "regulator_bulk_free" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:apds990x");

MODULE_INFO(srcversion, "E3148E45347D1E0A40ED88A");
