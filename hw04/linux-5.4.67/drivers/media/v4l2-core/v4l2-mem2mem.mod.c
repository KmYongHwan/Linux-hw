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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xf3b21588, "media_device_unregister_entity" },
	{ 0xbdaa62ae, "vb2_mmap" },
	{ 0x80c87b1, "media_devnode_create" },
	{ 0x1e7321c8, "vb2_create_bufs" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x601d0f14, "vb2_request_object_is_buffer" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x75e2b2d3, "media_remove_intf_links" },
	{ 0xaa5adacd, "vb2_prepare_buf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xe0e5f014, "v4l2_event_pending" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5d3db934, "vb2_qbuf" },
	{ 0x79ac7aa0, "vb2_querybuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6b2b7841, "media_device_register_entity" },
	{ 0xaa23fd19, "vb2_streamon" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x45ceb65d, "vb2_expbuf" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c59cc8d, "media_create_pad_link" },
	{ 0x881363e, "vb2_reqbufs" },
	{ 0x574ad181, "media_entity_remove_links" },
	{ 0x60d1be6c, "media_create_intf_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x2012b80b, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0x9bbeb8c1, "vb2_streamoff" },
	{ 0x8564408b, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc,videobuf2-common,videobuf2-v4l2,videodev");


MODULE_INFO(srcversion, "E2DFAEA18E387DAB2FB20A7");
