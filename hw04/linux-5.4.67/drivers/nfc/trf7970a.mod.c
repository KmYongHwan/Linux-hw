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
	{ 0x9c160d9e, "skb_put" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xca1a8c46, "nfc_alloc_recv_skb" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x1b6f5bda, "nfc_digital_register_device" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x5b4b8b39, "nfc_digital_allocate_device" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfee2bce, "devm_gpiod_get_index_optional" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x536a8955, "nfc_digital_free_device" },
	{ 0x7f4c1002, "nfc_digital_unregister_device" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb18156be, "skb_pull" },
	{ 0x85b7373, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc,nfc_digital");

MODULE_ALIAS("spi:trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970aC*");

MODULE_INFO(srcversion, "1D42F87F197EEB48234EE3E");
