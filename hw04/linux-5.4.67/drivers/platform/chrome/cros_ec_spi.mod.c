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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa45e53e7, "cros_ec_check_result" },
	{ 0x1d71cf41, "spi_bus_unlock" },
	{ 0x61588fe2, "spi_bus_lock" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x6a793890, "cros_ec_prepare_tx" },
	{ 0xf12d9d21, "spi_sync_locked" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x9a9b2aea, "cros_ec_register" },
	{ 0xfd89e917, "sched_setscheduler_nocheck" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x5c125775, "kthread_create_worker" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x565854ea, "kthread_destroy_worker" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xffa8089f, "kthread_flush_work" },
	{ 0x4b22e469, "kthread_queue_work" },
	{ 0xe2a8f14b, "cros_ec_unregister" },
	{ 0xd917f6c6, "cros_ec_suspend" },
	{ 0x5dc9b186, "cros_ec_resume" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cros_ec");

MODULE_ALIAS("spi:cros-ec-spi");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-spi");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-spiC*");

MODULE_INFO(srcversion, "D21B712D02EE676D8EEC33F");
