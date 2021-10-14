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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x754d539c, "strlen" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5f592f1d, "pcie_capability_read_dword" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd8415bdc, "devlink_alloc" },
	{ 0x35eb7109, "devlink_params_register" },
	{ 0x999e8297, "vfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5c160d82, "devlink_params_publish" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe302eb4e, "devlink_param_driverinit_value_set" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe4b30419, "build_skb" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe2aae5cc, "crc8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xd40c4eda, "devlink_free" },
	{ 0x2075ed1, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x11e41db2, "devlink_params_unregister" },
	{ 0x71deb539, "request_firmware" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x33a1ba14, "devlink_unregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xef04b368, "pci_find_ext_capability" },
	{ 0xede283d, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "crc8");


MODULE_INFO(srcversion, "070553434DF57F09AB08EF5");
