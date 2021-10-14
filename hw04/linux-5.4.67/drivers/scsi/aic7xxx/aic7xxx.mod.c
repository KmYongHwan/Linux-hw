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
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xff087b9b, "scsi_device_lookup_by_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xfcda597c, "spi_dv_device" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x349cba85, "strchr" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0x8d4d8561, "pci_get_slot" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc4142837, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x85df9b6c, "strsep" },
	{ 0x16fdd06b, "spi_attach_transport" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x7761bddc, "eisa_driver_register" },
	{ 0x76da24f6, "dma_get_required_mask" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0x6168380e, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9a932668, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x3b9b8b79, "eisa_driver_unregister" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9f0a02d4, "spi_display_xfer_agreement" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xba18006f, "scsi_report_bus_reset" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2694963f, "scsi_report_device_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("eisa:sADP7771*");
MODULE_ALIAS("eisa:sADP7756*");
MODULE_ALIAS("eisa:sADP7757*");
MODULE_ALIAS("eisa:sADP7782*");
MODULE_ALIAS("eisa:sADP7783*");
MODULE_ALIAS("eisa:sADP7770*");
MODULE_ALIAS("pci:v00009004d00005078sv00009004sd00007850bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00003860sv00009004sd00003869bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006075sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00002178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006038sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007278sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007378sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007478sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007678sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008278sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008478sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008378sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008678sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008878sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008778sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00000078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv00009005sd00000181bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000A100bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd00002180bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000A180bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000E100bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000012sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000014sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000015sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000016sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000017sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000018sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000019sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Asv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Bsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Csv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Dsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Esv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Fsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv00009005sd00000003bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd0000E2A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00000E11sd0000E2A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd000062A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd00006220bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd0000E220bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000081sv00009005sd000062A1bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000083sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007891bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007892bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007894bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007890sv00009004sd00007893bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv00009005sd0000F500bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv00009005sd0000B500bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000053sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv00009005sd0000F620bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv00000E11sd0000F620bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C3sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009004d00005078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00005578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00003860sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000012sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000014sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000015sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000016sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000017sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000018sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000019sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000081sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000082sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000083sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000084sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000085sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000086sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000087sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000088sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000089sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000052sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000053sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000054sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000055sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000056sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000057sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000058sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000059sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C1sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C2sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C3sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C4sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C5sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C6sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C7sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C8sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C9sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CAsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CBsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CCsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CDsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CEsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CFsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00001078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007815sv*sd*bc01sc00i*");

MODULE_INFO(srcversion, "6FD7C74D4151863F3B9FD78");
