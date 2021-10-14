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
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0xc4b49901, "p9_client_cb" },
	{ 0x3b567ab7, "v9fs_unregister_trans" },
	{ 0xcc2f907b, "iov_iter_get_pages_alloc" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0x1a015d7a, "virtio_check_driver_offered_feature" },
	{ 0x284b2c82, "v9fs_register_trans" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x747ba3cd, "virtqueue_kick" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x41b0e1e4, "_dev_emerg" },
	{ 0xe9f14282, "virtqueue_get_buf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1f26612e, "virtqueue_add_sgs" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x54e865b9, "p9_release_pages" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3fadea45, "unregister_virtio_driver" },
	{ 0x297bafd4, "sysfs_remove_file_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf5524491, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2871caa7, "iov_iter_single_seg_count" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x4ad54488, "sysfs_create_file_ns" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x6c36e95b, "p9_req_put" },
	{ 0xd66cd0b1, "register_virtio_driver" },
};

MODULE_INFO(depends, "9pnet");

MODULE_ALIAS("virtio:d00000009v*");

MODULE_INFO(srcversion, "FA34DC353AB9CBB15BC0C29");
