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
	{ 0x6fbc5503, "intel_gvt_unregister_hypervisor" },
	{ 0xfbf407d0, "intel_gvt_register_hypervisor" },
	{ 0x8eb89c89, "kvm_slot_page_track_add_page" },
	{ 0xb5fa9b13, "gfn_to_memslot" },
	{ 0x7897e410, "mmput" },
	{ 0xc1e4ce16, "unuse_mm" },
	{ 0xcd0e4f76, "use_mm" },
	{ 0xbc11654a, "kvm_write_guest" },
	{ 0xaf176840, "kvm_read_guest" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xf68cbe21, "kvm_slot_page_track_remove_page" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x2890e7b1, "kvm_is_visible_gfn" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0xadc044b7, "vfio_set_irqs_validate_and_prepare" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x4aea19af, "vfio_pin_pages" },
	{ 0x999e8297, "vfree" },
	{ 0xece784c2, "rb_first" },
	{ 0xb3f930a0, "kvm_put_kvm" },
	{ 0xd4919ee4, "kvm_page_track_unregister_notifier" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0xf720a60b, "module_put" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa8629058, "mdev_from_dev" },
	{ 0x9d484606, "debugfs_create_ulong" },
	{ 0xabd2cc0b, "kvm_page_track_register_notifier" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x20cd21c3, "kvm_get_kvm" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xba312d7b, "current_task" },
	{ 0x723c7f16, "vfio_unregister_notifier" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x20f10568, "vfio_register_notifier" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x1172db1, "gfn_to_pfn" },
	{ 0x749793d7, "vfio_unpin_pages" },
	{ 0x9b4e0f59, "vfio_device_get_from_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x19c3872c, "mdev_dev" },
	{ 0x37a1583d, "mdev_set_drvdata" },
	{ 0x583b8b49, "mdev_parent_dev" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0xc7d56e32, "mdev_get_drvdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a05f7b9, "mdev_register_device" },
	{ 0x516d00fd, "mdev_unregister_device" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc5850110, "printk" },
	{ 0xd13f9985, "drm_edid_block_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x56470118, "__warn_printk" },
	{ 0x969c73d9, "vfio_device_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i915,kvm,mdev,drm");


MODULE_INFO(srcversion, "7FA62594EDA852B0E1BEEC8");
