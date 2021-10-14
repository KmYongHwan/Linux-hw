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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x999e8297, "vfree" },
	{ 0x306e5760, "root_device_unregister" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xf44a972b, "driver_register" },
	{ 0x35db28d0, "bus_register" },
	{ 0x74b6572, "__root_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x785dd9f2, "device_register" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x8ac743de, "sg_copy_buffer" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x354dbe98, "blk_abort_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x2bade2b8, "blk_mq_unique_tag" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0x96848186, "scnprintf" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0DB3496A8EA67FBDA2E0946");
