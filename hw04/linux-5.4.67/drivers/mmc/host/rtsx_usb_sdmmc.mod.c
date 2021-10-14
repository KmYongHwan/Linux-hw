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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xfe5d4f1c, "rtsx_usb_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xdc5945ca, "rtsx_usb_transfer_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x21d9e5b3, "rtsx_usb_ep0_read_register" },
	{ 0xddad347b, "rtsx_usb_switch_clock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0xcf6c3381, "rtsx_usb_card_exclusive_check" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5fedd989, "rtsx_usb_write_register" },
	{ 0x59565417, "rtsx_usb_read_register" },
	{ 0xb81023b3, "rtsx_usb_read_ppbuf" },
	{ 0x7c62fc72, "rtsx_usb_get_rsp" },
	{ 0xae59f57d, "rtsx_usb_send_cmd" },
	{ 0xc1936d16, "rtsx_usb_add_cmd" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xbbbdbe76, "rtsx_usb_ep0_write_register" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x21109842, "rtsx_usb_get_card_status" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb");

MODULE_ALIAS("platform:rtsx_usb_sdmmc");

MODULE_INFO(srcversion, "9FB7A9BF9EB028301A802C1");
