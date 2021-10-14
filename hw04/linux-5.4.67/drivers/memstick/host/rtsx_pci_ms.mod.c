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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa844ed5e, "rtsx_pci_card_power_on" },
	{ 0xbed49746, "rtsx_pci_card_pull_ctl_enable" },
	{ 0xf6088003, "rtsx_pci_card_pull_ctl_disable" },
	{ 0xf867b8e5, "rtsx_pci_card_power_off" },
	{ 0xd4100164, "rtsx_pci_card_exclusive_check" },
	{ 0xc9b3b641, "memstick_detect_change" },
	{ 0x22f0b9b8, "rtsx_pci_transfer_data" },
	{ 0x68f05748, "rtsx_pci_send_cmd_no_wait" },
	{ 0x9ec3d5c5, "rtsx_pci_switch_clock" },
	{ 0xa770f3a9, "rtsx_pci_start_run" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c06889b, "rtsx_pci_write_register" },
	{ 0xe171f111, "rtsx_pci_read_register" },
	{ 0xb1302cc0, "rtsx_pci_send_cmd" },
	{ 0xd5fd716, "rtsx_pci_add_cmd" },
	{ 0xc1c110c9, "memstick_add_host" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3eee3c2e, "memstick_alloc_host" },
	{ 0xa8ff0101, "memstick_free_host" },
	{ 0x95d79dbf, "memstick_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x38a70269, "memstick_next_req" },
	{ 0xb8299d81, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3c10c460, "memstick_suspend_host" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x45a77022, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci,memstick");

MODULE_ALIAS("platform:rtsx_pci_ms");

MODULE_INFO(srcversion, "B3E914813B70C28F08D4E99");
