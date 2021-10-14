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
	{ 0x12a38747, "usleep_range" },
	{ 0xddad347b, "rtsx_usb_switch_clock" },
	{ 0xdc5945ca, "rtsx_usb_transfer_data" },
	{ 0xcf6c3381, "rtsx_usb_card_exclusive_check" },
	{ 0xbbbdbe76, "rtsx_usb_ep0_write_register" },
	{ 0x21d9e5b3, "rtsx_usb_ep0_read_register" },
	{ 0x7c62fc72, "rtsx_usb_get_rsp" },
	{ 0xae59f57d, "rtsx_usb_send_cmd" },
	{ 0xc1936d16, "rtsx_usb_add_cmd" },
	{ 0xc1c110c9, "memstick_add_host" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3eee3c2e, "memstick_alloc_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5fedd989, "rtsx_usb_write_register" },
	{ 0x59565417, "rtsx_usb_read_register" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xa8ff0101, "memstick_free_host" },
	{ 0x95d79dbf, "memstick_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x38a70269, "memstick_next_req" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3c10c460, "memstick_suspend_host" },
	{ 0x45a77022, "memstick_resume_host" },
	{ 0xc9b3b641, "memstick_detect_change" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb,memstick");

MODULE_ALIAS("platform:rtsx_usb_ms");

MODULE_INFO(srcversion, "0EA7D665C9A5E9B3B71BED1");
