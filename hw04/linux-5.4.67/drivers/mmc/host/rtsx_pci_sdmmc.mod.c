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
	{ 0xaaab5798, "rtsx_pci_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x261ca7b2, "rtsx_pci_dma_transfer" },
	{ 0x68f05748, "rtsx_pci_send_cmd_no_wait" },
	{ 0xceb86d8a, "rtsx_pci_read_ppbuf" },
	{ 0x9ec3d5c5, "rtsx_pci_switch_clock" },
	{ 0xa844ed5e, "rtsx_pci_card_power_on" },
	{ 0xbed49746, "rtsx_pci_card_pull_ctl_enable" },
	{ 0xf6088003, "rtsx_pci_card_pull_ctl_disable" },
	{ 0xf867b8e5, "rtsx_pci_card_power_off" },
	{ 0xb1302cc0, "rtsx_pci_send_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2bf7cc63, "rtsx_pci_switch_output_voltage" },
	{ 0xe171f111, "rtsx_pci_read_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd4100164, "rtsx_pci_card_exclusive_check" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x94538ef8, "rtsx_pci_dma_map_sg" },
	{ 0x22b774e2, "rtsx_pci_card_exist" },
	{ 0xb78b8fa3, "rtsx_pci_dma_unmap_sg" },
	{ 0xd5fd716, "rtsx_pci_add_cmd" },
	{ 0xe484e35f, "ioread32" },
	{ 0xa770f3a9, "rtsx_pci_start_run" },
	{ 0x2c06889b, "rtsx_pci_write_register" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0xb8299d81, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci");

MODULE_ALIAS("platform:rtsx_pci_sdmmc");

MODULE_INFO(srcversion, "B8BC3A9CFAD037D8EBF5848");
