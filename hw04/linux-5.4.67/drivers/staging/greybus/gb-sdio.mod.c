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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0xef697afc, "gb_gbphy_register_driver" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0x709bc494, "gb_connection_disable_rx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7de887e5, "gb_gbphy_deregister_driver" },
	{ 0x23a6d701, "gb_connection_enable_tx" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5dc4578a, "gb_operation_sync_timeout" },
	{ 0x5c03fd94, "gb_connection_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x9ce24b36, "gb_operation_request_send_sync_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2345868f, "gb_connection_enable" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x563a20e5, "gb_connection_create" },
	{ 0x61ea921a, "gb_connection_disable" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x80561c62, "gb_operation_get_payload_size_max" },
	{ 0x3b6475ec, "gb_operation_put" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x872495cf, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "1177D317CEF9678C93E91EA");
