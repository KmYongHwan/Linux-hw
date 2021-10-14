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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xb469ec53, "cx8802_unregister_driver" },
	{ 0xd32db8e2, "cx8802_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7bfd4444, "vb2_dvb_register_bus" },
	{ 0x6141c8c5, "cx88_tuner_callback" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0xf3a07da1, "vb2_dvb_dealloc_frontends" },
	{ 0xa240c3bf, "vb2_dvb_alloc_frontend" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1879a22b, "vp3054_i2c_probe" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xebc0e1bd, "cx88_setup_xc3028" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2b5d1f34, "cx8802_get_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xee9ce050, "vb2_dvb_find_frontend" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x90bb263a, "cx8802_buf_prepare" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x5fb945b7, "cx8802_start_dma" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf61f5dfd, "cx8802_cancel_buffers" },
	{ 0xe6a07f8b, "cx8802_buf_queue" },
	{ 0xc085bf, "vb2_dvb_get_frontend" },
	{ 0x3610e412, "vp3054_i2c_remove" },
	{ 0x73f66011, "vb2_dvb_unregister_bus" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,cx8802,videobuf2-dvb,cx88xx,videobuf2-dma-sg,cx88-vp3054-i2c,dvb-core,videobuf2-common");


MODULE_INFO(srcversion, "4FF03413187F0F9A65F2505");
