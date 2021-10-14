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
	{ 0x7d22f0d5, "simple_open" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x8b01ea6a, "mei_cldev_driver_unregister" },
	{ 0x4201ac13, "__mei_cldev_driver_register" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x82bc4f51, "mei_cldev_register_notif_cb" },
	{ 0x272ebebb, "mei_cldev_register_rx_cb" },
	{ 0xdea856d2, "mei_cldev_enable" },
	{ 0x4bf75d1, "mei_cldev_set_drvdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa5f4478a, "mei_cldev_ver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2548d16, "mei_cldev_recv" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0x637d18c6, "watchdog_register_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1b3a19aa, "mei_cldev_send" },
	{ 0x29361773, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x4ff4f4dd, "mei_cldev_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x4d126af1, "mei_cldev_get_drvdata" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7137f851, "watchdog_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:05b79a6f-4628-4d7f-899d-a91514cb32ab:*:*");

MODULE_INFO(srcversion, "016E129C6B03AB6CBA06DD4");
